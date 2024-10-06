#infdef __TINYEXPR_HPP__
#define __TINYEXPR_HPP__

#include "tinyexpr"

namespace tinyexpr
{
	using expr = ::te_expr;
	using variable = ::te_variable;
	using ::te_interp;
	using ::te_compile;
	using ::te_eval;
	using ::te_print;
	using ::te_free;
	
	constexpr auto interp = te_interp;
	constexpr auto compile = te_compile;
	constexpr auto eval = te_eval;
	constexpr auto print = te_print;
	constexpr auto free = te_free;
}

#endif // __TINYEXPR_HPP__
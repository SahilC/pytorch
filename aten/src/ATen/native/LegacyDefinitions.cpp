#include <ATen/ATen.h>
#include <ATen/NativeFunctions.h>

namespace at { namespace native {

// Methods

int64_t ndimension(const Tensor& self) {
  return self._th_ndimension();
}

Tensor & set_(Tensor& self, Storage source) {
  return self._th_set_(source);
}

Tensor & set_(Tensor& self, Storage source, int64_t storage_offset, IntList size, IntList stride) {
  return self._th_set_(source, storage_offset, size, stride);
}

Tensor & set_(Tensor& self, const Tensor & source) {
  return self._th_set_(source);
}

Tensor & set_(Tensor& self) {
  return self._th_set_();
}

bool is_contiguous(const Tensor& self) {
  return self._th_is_contiguous();
}

bool is_set_to(const Tensor& self, const Tensor & tensor) {
  return self._th_is_set_to(tensor);
}

Tensor & masked_fill_(Tensor& self, const Tensor & mask, Scalar value) {
  return self._th_masked_fill_(mask, value);
}

Tensor & masked_fill_(Tensor& self, const Tensor & mask, const Tensor & value) {
  return self._th_masked_fill_(mask, value);
}

Tensor & masked_scatter_(Tensor& self, const Tensor & mask, const Tensor & source) {
  return self._th_masked_scatter_(mask, source);
}

Tensor view(const Tensor& self, IntList size) {
  return self._th_view(size);
}

Tensor & put_(Tensor& self, const Tensor & index, const Tensor & source, bool accumulate) {
  return self._th_put_(index, source, accumulate);
}

Tensor & index_add_(Tensor& self, int64_t dim, const Tensor & index, const Tensor & source) {
  return self._th_index_add_(dim, index, source);
}

Tensor & index_fill_(Tensor& self, int64_t dim, const Tensor & index, Scalar value) {
  return self._th_index_fill_(dim, index, value);
}

Tensor & index_fill_(Tensor& self, int64_t dim, const Tensor & index, const Tensor & value) {
  return self._th_index_fill_(dim, index, value);
}

Tensor & scatter_(Tensor& self, int64_t dim, const Tensor & index, const Tensor & src) {
  return self._th_scatter_(dim, index, src);
}

Tensor & scatter_(Tensor& self, int64_t dim, const Tensor & index, Scalar value) {
  return self._th_scatter_(dim, index, value);
}

Tensor & scatter_add_(Tensor& self, int64_t dim, const Tensor & index, const Tensor & src) {
  return self._th_scatter_add_(dim, index, src);
}

Tensor & lt_(Tensor& self, Scalar other) {
  return self._th_lt_(other);
}

Tensor & lt_(Tensor& self, const Tensor & other) {
  return self._th_lt_(other);
}

Tensor & gt_(Tensor& self, Scalar other) {
  return self._th_gt_(other);
}

Tensor & gt_(Tensor& self, const Tensor & other) {
  return self._th_gt_(other);
}

Tensor & le_(Tensor& self, Scalar other) {
  return self._th_le_(other);
}

Tensor & le_(Tensor& self, const Tensor & other) {
  return self._th_le_(other);
}

Tensor & ge_(Tensor& self, Scalar other) {
  return self._th_ge_(other);
}

Tensor & ge_(Tensor& self, const Tensor & other) {
  return self._th_ge_(other);
}

Tensor & eq_(Tensor& self, Scalar other) {
  return self._th_eq_(other);
}

Tensor & eq_(Tensor& self, const Tensor & other) {
  return self._th_ge_(other);
}

Tensor & ne_(Tensor& self, Scalar other) {
  return self._th_ne_(other);
}

Tensor & ne_(Tensor& self, const Tensor & other) {
  return self._th_ne_(other);
}

Tensor & lgamma_(Tensor& self) {
  return self._th_lgamma_();
}

Tensor & atan2_(Tensor& self, const Tensor & other) {
  return self._th_atan2_(other);
}

Tensor & tril_(Tensor& self, int64_t diagonal) {
  return self._th_tril_(diagonal);
}

Tensor & triu_(Tensor& self, int64_t diagonal) {
  return self._th_triu_(diagonal);
}

Tensor & digamma_(Tensor& self) {
  return self._th_digamma_();
}

Tensor & polygamma_(Tensor& self, int64_t n) {
  return self._th_polygamma_(n);
}

Tensor & erfinv_(Tensor& self) {
  return self._th_erfinv_();
}

Tensor & frac_(Tensor& self) {
  return self._th_frac_();
}

Tensor & renorm_(Tensor& self, Scalar p, int64_t dim, Scalar maxnorm) {
  return self._th_renorm_(p, dim, maxnorm);
}

Tensor & reciprocal_(Tensor& self) {
  return self._th_reciprocal_();
}

Tensor & neg_(Tensor& self) {
  return self._th_neg_();
}

Tensor & pow_(Tensor& self, Scalar exponent) {
  return self._th_pow_(exponent);
}

Tensor & pow_(Tensor& self, const Tensor & exponent) {
  return self._th_pow_(exponent);
}

Tensor & lerp_(Tensor& self, const Tensor & end, Scalar weight) {
  return self._th_lerp_(end, weight);
}

Tensor & sign_(Tensor& self) {
  return self._th_sign_();
}

Tensor & fmod_(Tensor& self, Scalar other) {
  return self._th_fmod_(other);
}

Tensor & fmod_(Tensor& self, const Tensor & other) {
  return self._th_fmod_(other);
}

Tensor & remainder_(Tensor& self, Scalar other) {
  return self._th_remainder_(other);
}

Tensor & remainder_(Tensor& self, const Tensor & other) {
  return self._th_remainder_(other);
}

Tensor & addbmm_(Tensor& self, const Tensor & batch1, const Tensor & batch2, Scalar beta, Scalar alpha) {
  return self._th_addbmm_(batch1, batch2, beta, alpha);
}

Tensor & addcmul_(Tensor& self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return self._th_addcmul_(tensor1, tensor2, value);
}

Tensor & addcdiv_(Tensor& self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return self._th_addcdiv_(tensor1, tensor2, value);
}

Tensor & random_(Tensor& self, int64_t from, int64_t to, Generator * generator) {
  return self._th_random_(from, to, generator);
}

Tensor & random_(Tensor& self, int64_t to, Generator * generator) {
  return self._th_random_(to, generator);
}

Tensor & random_(Tensor& self, Generator * generator) {
  return self._th_random_(generator);
}

Tensor & uniform_(Tensor& self, double from, double to, Generator * generator) {
  return self._th_uniform_(from, to, generator);
}

Tensor & normal_(Tensor& self, double mean, double std, Generator * generator) {
  return self._th_normal_(mean, std, generator);
}

Tensor & cauchy_(Tensor& self, double median, double sigma, Generator * generator) {
  return self._th_cauchy_(median, sigma, generator);
}

Tensor & log_normal_(Tensor& self, double mean, double std, Generator * generator) {
  return self._th_log_normal_(mean, std, generator);
}

Tensor & exponential_(Tensor& self, double lambd, Generator * generator) {
  return self._th_exponential_(lambd, generator);
}

Tensor & geometric_(Tensor& self, double p, Generator * generator) {
  return self._th_geometric_(p, generator);
}

// Functions

Tensor & diag_out(Tensor & result, const Tensor & self, int64_t diagonal) {
  return at::_th_diag_out(result, self, diagonal);
}

Tensor diag(const Tensor & self, int64_t diagonal) {
  return at::_th_diag(self, diagonal);
}

Tensor & cross_out(Tensor & result, const Tensor & self, const Tensor & other, int64_t dim) {
  return at::_th_cross_out(result, self, other, dim);
}

Tensor cross(const Tensor & self, const Tensor & other, int64_t dim) {
  return at::_th_cross(self, other, dim);
}

Tensor & triu_out(Tensor & result, const Tensor & self, int64_t diagonal) {
  return at::_th_triu_out(result, self, diagonal);
}

Tensor triu(const Tensor & self, int64_t diagonal) {
  return at::_th_triu(self, diagonal);
}

Tensor & tril_out(Tensor & result, const Tensor & self, int64_t diagonal) {
  return at::_th_tril_out(result, self, diagonal);
}

Tensor tril(const Tensor & self, int64_t diagonal) {
  return at::_th_tril(self, diagonal);
}

Tensor trace(const Tensor & self) {
  return at::_th_trace(self);
}

Tensor & ne_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_ne_out(result, self, other);
}

Tensor ne(const Tensor & self, Scalar other) {
  return at::_th_ne(self, other);
}

Tensor & ne_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_ne_out(result, self, other);
}

Tensor ne(const Tensor & self, const Tensor & other) {
  return at::_th_ne(self, other);
}

Tensor & eq_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_eq_out(result, self, other);
}

Tensor eq(const Tensor & self, Scalar other) {
  return at::_th_eq(self, other);
}

Tensor & eq_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_eq_out(result, self, other);
}

Tensor eq(const Tensor & self, const Tensor & other) {
  return at::_th_eq(self, other);
}

Tensor & ge_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_ge_out(result, self, other);
}

Tensor ge(const Tensor & self, Scalar other) {
  return at::_th_ge(self, other);
}

Tensor & ge_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_ge_out(result, self, other);
}

Tensor ge(const Tensor & self, const Tensor & other) {
  return at::_th_ge(self, other);
}

Tensor & le_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_le_out(result, self, other);
}

Tensor le(const Tensor & self, Scalar other) {
  return at::_th_le(self, other);
}

Tensor & le_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_le_out(result, self, other);
}

Tensor le(const Tensor & self, const Tensor & other) {
  return at::_th_le(self, other);
}

Tensor & gt_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_gt_out(result, self, other);
}

Tensor gt(const Tensor & self, Scalar other) {
  return at::_th_gt(self, other);
}

Tensor & gt_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_gt_out(result, self, other);
}

Tensor gt(const Tensor & self, const Tensor & other) {
  return at::_th_gt(self, other);
}

Tensor & lt_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_lt_out(result, self, other);
}

Tensor lt(const Tensor & self, Scalar other) {
  return at::_th_lt(self, other);
}

Tensor & lt_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_lt_out(result, self, other);
}

Tensor lt(const Tensor & self, const Tensor & other) {
  return at::_th_lt(self, other);
}

Tensor & take_out(Tensor & result, const Tensor & self, const Tensor & index) {
  return at::_th_take_out(result, self, index);
}

Tensor take(const Tensor & self, const Tensor & index) {
  return at::_th_take(self, index);
}

Tensor & index_select_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index) {
  return at::_th_index_select_out(result, self, dim, index);
}

Tensor index_select(const Tensor & self, int64_t dim, const Tensor & index) {
  return at::_th_index_select(self, dim, index);
}

Tensor & masked_select_out(Tensor & result, const Tensor & self, const Tensor & mask) {
  return at::_th_masked_select_out(result, self, mask);
}

Tensor masked_select(const Tensor & self, const Tensor & mask) {
  return at::_th_masked_select(self, mask);
}

Tensor & nonzero_out(Tensor & result, const Tensor & self) {
  return at::_th_nonzero_out(result, self);
}

Tensor nonzero(const Tensor & self) {
  return at::_th_nonzero(self);
}

Tensor & gather_out(Tensor & result, const Tensor & self, int64_t dim, const Tensor & index) {
  return at::_th_gather_out(result, self, dim, index);
}

Tensor gather(const Tensor & self, int64_t dim, const Tensor & index) {
  return at::_th_gather(self, dim, index);
}

Tensor & addcmul_out(Tensor & result, const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return at::_th_addcmul_out(result, self, tensor1, tensor2, value);
}

Tensor addcmul(const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return at::_th_addcmul(self, tensor1, tensor2, value);
}

Tensor & addcdiv_out(Tensor & result, const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return at::_th_addcdiv_out(result, self, tensor1, tensor2, value);
}

Tensor addcdiv(const Tensor & self, const Tensor & tensor1, const Tensor & tensor2, Scalar value) {
  return at::_th_addcdiv(self, tensor1, tensor2, value);
}

std::tuple<Tensor &,Tensor &> gels_out(Tensor & X, Tensor & qr, const Tensor & self, const Tensor & A) {
  return at::_th_gels_out(X, qr, self, A);
}

std::tuple<Tensor,Tensor> gels(const Tensor & self, const Tensor & A) {
  return at::_th_gels(self, A);
}

std::tuple<Tensor &,Tensor &> trtrs_out(Tensor & X, Tensor & M, const Tensor & self, const Tensor & A, bool upper, bool transpose, bool unitriangular) {
  return at::_th_trtrs_out(X, M, self, A, upper, transpose, unitriangular);
}

std::tuple<Tensor,Tensor> trtrs(const Tensor & self, const Tensor & A, bool upper, bool transpose, bool unitriangular) {
  return at::_th_trtrs(self, A, upper, transpose, unitriangular);
}

std::tuple<Tensor &,Tensor &> symeig_out(Tensor & e, Tensor & V, const Tensor & self, bool eigenvectors, bool upper) {
  return at::_th_symeig_out(e, V, self, eigenvectors, upper);
}

std::tuple<Tensor,Tensor> symeig(const Tensor & self, bool eigenvectors, bool upper) {
  return at::_th_symeig(self, eigenvectors, upper);
}

std::tuple<Tensor &,Tensor &> eig_out(Tensor & e, Tensor & v, const Tensor & self, bool eigenvectors) {
  return at::_th_eig_out(e, v, self, eigenvectors);
}

std::tuple<Tensor,Tensor> eig(const Tensor & self, bool eigenvectors) {
  return at::_th_eig(self, eigenvectors);
}

std::tuple<Tensor &,Tensor &,Tensor &> svd_out(Tensor & U, Tensor & S, Tensor & V, const Tensor & self, bool some, bool compute_uv) {
  return at::_th_svd_out(U, S, V, self, some, compute_uv);
}

std::tuple<Tensor,Tensor,Tensor> svd(const Tensor & self, bool some, bool compute_uv) {
  return at::_th_svd(self, some, compute_uv);
}

Tensor & potrf_out(Tensor & result, const Tensor & self, bool upper) {
  return at::_th_potrf_out(result, self, upper);
}

Tensor potrf(const Tensor & self, bool upper) {
  return at::_th_potrf(self, upper);
}

Tensor & potrs_out(Tensor & result, const Tensor & self, const Tensor & input2, bool upper) {
  return at::_th_potrs_out(result, self, input2, upper);
}

Tensor potrs(const Tensor & self, const Tensor & input2, bool upper) {
  return at::_th_potrs(self, input2, upper);
}

Tensor & potri_out(Tensor & result, const Tensor & self, bool upper) {
  return at::_th_potri_out(result, self, upper);
}

Tensor potri(const Tensor & self, bool upper) {
  return at::_th_potri(self, upper);
}

std::tuple<Tensor &,Tensor &> pstrf_out(Tensor & u, Tensor & piv, const Tensor & self, bool upper, Scalar tol) {
  return at::_th_pstrf_out(u, piv, self, upper, tol);
}

std::tuple<Tensor,Tensor> pstrf(const Tensor & self, bool upper, Scalar tol) {
  return at::_th_pstrf(self, upper, tol);
}

std::tuple<Tensor &,Tensor &> qr_out(Tensor & Q, Tensor & R, const Tensor & self) {
  return at::_th_qr_out(Q, R, self);
}

std::tuple<Tensor,Tensor> qr(const Tensor & self) {
  return at::_th_qr(self);
}

std::tuple<Tensor &,Tensor &> geqrf_out(Tensor & result0, Tensor & result1, const Tensor & self) {
  return at::geqrf_out(result0, result1, self);
}

std::tuple<Tensor,Tensor> geqrf(const Tensor & self) {
  return at::_th_geqrf(self);
}

Tensor & orgqr_out(Tensor & result, const Tensor & self, const Tensor & input2) {
  return at::_th_orgqr_out(result, self, input2);
}

Tensor orgqr(const Tensor & self, const Tensor & input2) {
  return at::_th_orgqr(self, input2);
}

Tensor & ormqr_out(Tensor & result, const Tensor & self, const Tensor & input2, const Tensor & input3, bool left, bool transpose) {
  return at::ormqr_out(result, self, input2, input3, left, transpose);
}

Tensor ormqr(const Tensor & self, const Tensor & input2, const Tensor & input3, bool left, bool transpose) {
  return at::_th_ormqr(self, input2, input3, left, transpose);
}

std::tuple<Tensor &,Tensor &> btrifact_out(Tensor & A_LU, Tensor & pivots, const Tensor & self, bool pivot) {
  return at::_th_btrifact_out(A_LU, pivots, self, pivot);
}

std::tuple<Tensor,Tensor> btrifact(const Tensor & self, bool pivot) {
  return at::_th_btrifact(self, pivot);
}

std::tuple<Tensor &,Tensor &,Tensor &> btrifact_with_info_out(Tensor & A_LU, Tensor & pivots, Tensor & info, const Tensor & self, bool pivot) {
  return at::_th_btrifact_with_info_out(A_LU, pivots, info, self, pivot);
}

std::tuple<Tensor,Tensor,Tensor> btrifact_with_info(const Tensor & self, bool pivot) {
  return at::_th_btrifact_with_info(self, pivot);
}

Tensor & btrisolve_out(Tensor & result, const Tensor & self, const Tensor & LU_data, const Tensor & LU_pivots) {
  return at::_th_btrisolve_out(result, self, LU_data, LU_pivots);
}

Tensor btrisolve(const Tensor & self, const Tensor & LU_data, const Tensor & LU_pivots) {
  return at::_th_btrisolve(self, LU_data, LU_pivots);
}

Tensor & multinomial_out(Tensor & result, const Tensor & self, int64_t num_samples, bool replacement, Generator * generator) {
  return at::_th_multinomial_out(result, self, num_samples, replacement, generator);
}

Tensor multinomial(const Tensor & self, int64_t num_samples, bool replacement, Generator * generator) {
  return at::_th_multinomial(self, num_samples, replacement, generator);
}

Tensor & lgamma_out(Tensor & result, const Tensor & self) {
  return at::_th_lgamma_out(result, self);
}

Tensor lgamma(const Tensor & self) {
  return at::_th_lgamma(self);
}

Tensor & digamma_out(Tensor & result, const Tensor & self) {
  return at::_th_digamma_out(result, self);
}
Tensor digamma(const Tensor & self) {
  return at::_th_digamma(self);
}

Tensor & polygamma_out(Tensor & result, int64_t n, const Tensor & self) {
  return at::_th_polygamma_out(result, n, self);
}

Tensor polygamma(int64_t n, const Tensor & self) {
  return at::_th_polygamma(n, self);
}

Tensor & erfinv_out(Tensor & result, const Tensor & self) {
  return at::_th_erfinv_out(result, self);
}

Tensor erfinv(const Tensor & self) {
  return at::_th_erfinv(self);
}

Tensor & frac_out(Tensor & result, const Tensor & self) {
  return at::_th_frac_out(result, self);
}

Tensor frac(const Tensor & self) {
  return at::_th_frac(self);
}

Tensor dist(const Tensor & self, const Tensor & other, Scalar p) {
  return at::_th_dist(self, other, p);
}

Tensor & reciprocal_out(Tensor & result, const Tensor & self) {
  return at::_th_reciprocal_out(result, self);
}

Tensor reciprocal(const Tensor & self) {
  return at::_th_reciprocal(self);
}

Tensor & neg_out(Tensor & result, const Tensor & self) {
  return at::_th_neg_out(result, self);
}

Tensor neg(const Tensor & self) {
  return at::_th_neg(self);
}

Tensor & atan2_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_atan2_out(result, self, other);
}

Tensor atan2(const Tensor & self, const Tensor & other) {
  return at::_th_atan2(self, other);
}

Tensor & lerp_out(Tensor & result, const Tensor & self, const Tensor & end, Scalar weight) {
  return at::_th_lerp_out(result, self, end, weight);
}

Tensor lerp(const Tensor & self, const Tensor & end, Scalar weight) {
  return at::_th_lerp(self, end, weight);
}

Tensor & histc_out(Tensor & result, const Tensor & self, int64_t bins, Scalar min, Scalar max) {
  return at::_th_histc_out(result, self, bins, min, max);
}

Tensor histc(const Tensor & self, int64_t bins, Scalar min, Scalar max) {
  return at::_th_histc(self, bins, min, max);
}

Tensor & sign_out(Tensor & result, const Tensor & self) {
  return at::_th_sign_out(result, self);
}

Tensor sign(const Tensor & self) {
  return at::_th_sign(self);
}

Tensor & fmod_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_fmod_out(result, self, other);
}

Tensor fmod(const Tensor & self, Scalar other) {
  return at::_th_fmod(self, other);
}

Tensor & fmod_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_fmod_out(result, self, other);
}

Tensor fmod(const Tensor & self, const Tensor & other) {
  return at::_th_fmod(self, other);
}

Tensor & remainder_out(Tensor & result, const Tensor & self, Scalar other) {
  return at::_th_remainder_out(result, self, other);
}

Tensor remainder(const Tensor & self, Scalar other) {
  return at::_th_remainder(self, other);
}

Tensor & remainder_out(Tensor & result, const Tensor & self, const Tensor & other) {
  return at::_th_remainder_out(result, self, other);
}

Tensor remainder(const Tensor & self, const Tensor & other) {
  return at::_th_remainder(self, other);
}

}} // namespace at::native

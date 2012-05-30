function encodeTxnRequest() {
  document.uc-direcpay-form.requestparameter.value = encodeValue(document.uc-direcpay-form.requestparameter.value);
  document.uc-direcpay-form.submit();
}
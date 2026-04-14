@interface SigningKey : FullKey

- (id)description;
- (id)publicKey;
- (id)signData:(id)a0 error:(id *)a1;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;

@end

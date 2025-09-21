@interface AMSSecureCodableError : NSError

- (void)encodeWithCoder:(id)a0;
- (char)_secureCodingSupportedByObject:(id)a0;
- (id)_secureCodableUserInfoDictionary;

@end

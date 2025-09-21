@interface _REMChangeUniversalToken : REMChangeToken

+ (char)supportsSecureCoding;
+ (id)universalToken;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (char)isUniversal;

@end

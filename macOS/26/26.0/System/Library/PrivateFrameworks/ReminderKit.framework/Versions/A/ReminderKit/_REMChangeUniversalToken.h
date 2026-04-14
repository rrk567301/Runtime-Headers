@interface _REMChangeUniversalToken : REMChangeToken

+ (BOOL)supportsSecureCoding;
+ (id)universalToken;

- (long long)compareToken:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isUniversal;

@end

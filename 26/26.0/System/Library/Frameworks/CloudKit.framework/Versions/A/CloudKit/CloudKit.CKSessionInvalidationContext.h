@interface CloudKit.CKSessionInvalidationContext : CloudKit.CKSecureCodingBox <NSCopying>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithSqliteRepresentation:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithCoder:(id)a0;
- (id)CKXPCSuitableString;

@end

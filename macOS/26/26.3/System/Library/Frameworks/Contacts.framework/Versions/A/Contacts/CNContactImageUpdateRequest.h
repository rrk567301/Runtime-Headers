@interface CNContactImageUpdateRequest : CNContactPosterDataUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end

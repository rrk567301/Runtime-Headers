@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (BOOL)isPlaceholder;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

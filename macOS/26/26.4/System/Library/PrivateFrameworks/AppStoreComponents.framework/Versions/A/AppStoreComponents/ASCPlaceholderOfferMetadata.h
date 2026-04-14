@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (BOOL)isPlaceholder;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isPlaceholder;

@end

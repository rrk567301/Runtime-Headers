@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isEmpty;
- (id)initWithCoder:(id)a0;

@end

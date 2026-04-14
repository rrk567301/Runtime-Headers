@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

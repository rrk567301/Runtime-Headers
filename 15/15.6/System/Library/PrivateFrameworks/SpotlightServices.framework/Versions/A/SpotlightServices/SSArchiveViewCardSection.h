@class NSString, SFCardSection, CSSearchableItemAttributeSet;

@interface SSArchiveViewCardSection : SFArchiveViewCardSection <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (nonatomic) char isTopHit;
@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) SFCardSection *fallbackCardSection;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

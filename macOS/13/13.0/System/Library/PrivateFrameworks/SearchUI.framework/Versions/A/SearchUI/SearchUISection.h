@class NSString, SFCollectionCardSection, SFResultSection;

@interface SearchUISection : NSObject

@property (readonly) SFResultSection *resultSection;
@property (readonly) SFCollectionCardSection *collectionSection;
@property (readonly) NSString *reuseIdentifier;

+ (id)sectionWithResultSection:(id)a0;
+ (id)sectionWithResultSection:(id)a0 collectionCardSection:(id)a1;
+ (id)reuseIdentifierForSectionResult;
+ (id)reuseIdentifierForCollectionSection;

- (void).cxx_destruct;
- (id)initWithResultSection:(id)a0 collectionSection:(id)a1;

@end

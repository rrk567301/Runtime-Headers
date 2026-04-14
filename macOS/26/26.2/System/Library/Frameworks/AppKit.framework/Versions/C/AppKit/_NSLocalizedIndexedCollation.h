@class NSArray;

@interface _NSLocalizedIndexedCollation : NSObject

@property (nonatomic, readonly) NSArray *sectionTitles;

+ (id)currentCollation;

- (id)init;
- (id)sortedArrayFromArray:(id)a0 collationStringSelector:(SEL)a1;
- (long long)sectionForObject:(id)a0 collationStringSelector:(SEL)a1;
- (long long)sectionTitleIndexForTitle:(id)a0;

@end

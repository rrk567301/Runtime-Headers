@class NSSet;

@interface CESRSpeechProfileCategoryGroup : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *itemTypes;
@property (readonly, nonatomic) NSSet *speechCategories;

+ (id)all;
+ (id)mergeGroups:(id)a0;
+ (id)_addAssociatedSpeechCategories:(id)a0;
+ (id)_all;
+ (void)_buildCaches;
+ (void)_buildCachesFromBaseMap:(id)a0;
+ (id)groupForSets:(id)a0;
+ (id)groupForSpeechCategories:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithItemTypes:(id)a0 speechCategories:(id)a1;
- (BOOL)isEqualToSpeechCategoryGroup:(id)a0;
- (id)speechCategoriesDescription;

@end

@class NSSet;

@interface CKVSpeechCategoryGroup : NSObject

@property (readonly, nonatomic) NSSet *itemTypes;
@property (readonly, nonatomic) NSSet *speechCategories;

+ (id)all;
+ (id)_categoryToFieldTypeMap;
+ (id)_categoryToItemTypeCache;
+ (id)_itemTypesForSpeechCategory:(id)a0;
+ (BOOL)_speechCategory:(id)a0 hasFieldTypes:(id)a1;
+ (id)_calculateGroupForItemTypeNumber:(id)a0;
+ (id)groupForItemType:(long long)a0;
+ (id)groupForFieldTypes:(id)a0;
+ (id)groupForSpeechCategories:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemTypes:(id)a0 speechCategories:(id)a1;
- (id)speechCategoriesDescription;
- (BOOL)isEqualToSpeechCategoryGroup:(id)a0;

@end

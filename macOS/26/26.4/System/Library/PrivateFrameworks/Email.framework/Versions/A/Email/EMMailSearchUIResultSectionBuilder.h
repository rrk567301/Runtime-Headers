@interface EMMailSearchUIResultSectionBuilder : NSObject

+ (int)_biomeCategoryFromCategory:(id)a0;
+ (int)_biomeSectionTypeForSectionType:(long long)a0;
+ (int)_biomeStateFromCategory:(id)a0;
+ (int)_biomeSubtypeFromCategory:(id)a0;
+ (long long)_sectionTypeFromMessage:(id)a0;
+ (id)resultAttributeFromMessage:(id)a0;
+ (id)resultSectionFromMessage:(id)a0;
+ (id)resultSectionFromMessages:(id)a0 sectionType:(long long)a1;
+ (id)resultSectionsWithMessages:(id)a0;

@end

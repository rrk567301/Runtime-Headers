@class NSArray, NSString;

@interface CRScriptCategoryV1 : NSObject <CRScriptCategory> {
    unsigned long long _categoryValue;
}

@property (readonly) NSArray *scriptLocales;
@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;

+ (float)confidenceThreshold;
+ (id)supportedCategories;
+ (unsigned long long)categoryRevision;
+ (id)sequenceScriptForCategory:(id)a0;
+ (id)verticalLayoutSupportedCategories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

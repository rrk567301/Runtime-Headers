@class NSString;

@interface CRScriptCategory : NSObject <NSCopying>

@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;

+ (float)confidenceThreshold;
+ (id)supportedCategories;
+ (unsigned long long)categoryRevision;
+ (id)sequenceScriptToScriptCategoryMapping;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCategoryName:(id)a0;

@end

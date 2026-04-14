@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (retain) NSString *templateType;
@property (retain) NSString *fileExtension;

- (void).cxx_destruct;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (id)iconResource;
- (id)customRecipe;
- (unsigned long long)iconShape;
- (id)templateIconResource;
- (BOOL)_isAppleResource;
- (void)resolveResources;

@end

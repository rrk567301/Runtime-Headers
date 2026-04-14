@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (retain) NSString *templateType;
@property (retain) NSString *fileExtension;

- (void).cxx_destruct;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (unsigned long long)iconShape;
- (id)iconResource;
- (BOOL)_isAppleResource;
- (id)templateIconResource;
- (BOOL)supportsGraphicIcons;
- (BOOL)onlySupportsGraphicIcons;
- (id)customRecipe;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (void)resolveResources;

@end

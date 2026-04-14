@class NSArray, NSMutableArray;

@interface DGRetouchOperation : DGOperation {
    NSMutableArray *_inputStrokes;
    NSArray *_detectedFaces;
}

@property (nonatomic) double inputSize;
@property int inputRetouchLegacyVersion;

+ (void)initialize;
+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void)addStroke:(id)a0;
- (id)strokeAtIndex:(unsigned long long)a0;
- (unsigned long long)strokeCount;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;
- (void)deleteStroke:(id)a0;
- (id)inputDetectedFaces;
- (id)inputStrokes;
- (void)insertObject:(id)a0 inInputStrokesAtIndex:(unsigned long long)a1;
- (BOOL)isVideoCompatible;
- (void)masterRectChangedFromRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 toRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (BOOL)needsFullSizeMaster;
- (BOOL)needsInputImageWithoutGeometry;
- (void)removeObjectFromInputStrokesAtIndex:(unsigned long long)a0;
- (void)replaceObjectInInputStrokesAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)requiresLegacyRender;
- (void)setInputDetectedFaces:(id)a0;
- (void)setInputStrokes:(id)a0;
- (void)setOperationDefaults;
- (void)setStroke:(id)a0 atIndex:(unsigned long long)a1;

@end

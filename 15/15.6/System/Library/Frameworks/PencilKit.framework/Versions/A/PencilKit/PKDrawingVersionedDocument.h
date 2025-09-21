@class PKDrawingConcrete;

@interface PKDrawingVersionedDocument : PKVersionedDocument

@property (retain, nonatomic) PKDrawingConcrete *drawing;
@property (retain, nonatomic) Class drawingClass;
@property (nonatomic) char loadNonInkingStrokes;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (id)initWithDrawing:(id)a0;
- (id)initWithDrawingClass:(Class)a0;
- (char)loadUnzippedData:(id)a0;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;

@end

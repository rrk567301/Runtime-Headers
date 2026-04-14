@class CIContext;

@interface CIVNFaceDetector : CIDetector

@property (readonly, retain) CIContext *context;

- (void)dealloc;
- (id)initWithContext:(id)a0 options:(id)a1;
- (id)featuresInImage:(id)a0 options:(id)a1;

@end

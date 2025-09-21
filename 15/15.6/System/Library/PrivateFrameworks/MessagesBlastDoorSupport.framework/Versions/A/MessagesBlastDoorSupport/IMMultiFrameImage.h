@class NSURL, NSMutableArray, NSOutputStream;

@interface IMMultiFrameImage : NSObject

@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSMutableArray *durations;

- (void).cxx_destruct;
- (void)deleteStream;
- (char)finalizeASTCWithError:(id *)a0;
- (char)finalizeOptimizedBitmapWithError:(id *)a0;
- (id)initForWritingWithFileURL:(id)a0 scale:(float)a1;
- (char)writeASTCImage:(struct CGImage { } *)a0 duration:(double)a1 error:(id *)a2;
- (char)writeAsOptimizedBitmapWithImage:(struct CGImage { } *)a0 duration:(double)a1 error:(id *)a2;

@end

@class NSURL;
@protocol CUTFileCopierDelegate;

@interface CUTFileCopier : NSObject

@property void *_BOMCopier;
@property char inProgress;
@property unsigned int operation;
@property (weak) id<CUTFileCopierDelegate> delegate;
@property (readonly, copy) NSURL *inputURL;
@property (readonly, copy) NSURL *outputURL;
@property (readonly) id identifier;
@property (readonly, nonatomic) char wasCancelled;
@property (readonly, nonatomic) char didErrorOccur;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)start;
- (void)cancel;
- (void)_main_copierFinishedWithResult:(id)a0;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned int)a3 delegate:(id)a4;

@end

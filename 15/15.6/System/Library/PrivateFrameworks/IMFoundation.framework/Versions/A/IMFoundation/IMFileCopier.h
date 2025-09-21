@class NSURL, NSObject;
@protocol OS_dispatch_queue, IMFileCopierDelegate;

@interface IMFileCopier : NSObject

@property void *_BOMCopier;
@property char inProgress;
@property unsigned long long operation;
@property (copy) id /* block */ _callback;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property id<IMFileCopierDelegate> delegate;
@property (readonly, retain) NSURL *inputURL;
@property (readonly, retain) NSURL *outputURL;
@property (readonly, retain) id identifier;
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
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 delegate:(id)a4;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 completionBlock:(id /* block */)a4 queue:(id)a5;

@end

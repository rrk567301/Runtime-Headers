@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {
    GEOMapRequestManager *_requestManager;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (readonly, nonatomic) char isFinished;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithManager:(id)a0;
- (void)complete;
- (void)_finishAndCallHandler:(id /* block */)a0;

@end

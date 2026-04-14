@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {
    GEOMapRequestManager *_requestManager;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (readonly, nonatomic) BOOL isFinished;

- (void)complete;
- (void)cancel;
- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_finishAndCallHandler:(id /* block */)a0;

@end

@class SPSearchQueryContext;

@interface SPClientSession : NSObject {
    SPSearchQueryContext *_currentQueryContext;
}

@property (nonatomic) BOOL infinitePatience;

- (void)preheat;
- (void)activate;
- (void)deactivate;
- (id)queryTaskWithContext:(id)a0;
- (void).cxx_destruct;
- (void)activateSync;

@end

@class SPSearchQueryContext;

@interface SPClientSession : NSObject {
    SPSearchQueryContext *_currentQueryContext;
}

@property (nonatomic) BOOL infinitePatience;

- (void)preheat;
- (id)queryTaskWithContext:(id)a0;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)activateSync;

@end

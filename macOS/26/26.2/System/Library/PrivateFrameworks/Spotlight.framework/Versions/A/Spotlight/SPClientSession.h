@class SPSearchQueryContext;

@interface SPClientSession : NSObject {
    SPSearchQueryContext *_currentQueryContext;
}

@property (nonatomic) BOOL infinitePatience;

- (void)preheat;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (id)queryTaskWithContext:(id)a0;
- (void)activateSync;

@end

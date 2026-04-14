@class SPSearchQueryContext;

@interface SPClientSession : NSObject {
    SPSearchQueryContext *_currentQueryContext;
}

@property (nonatomic) BOOL infinitePatience;

- (void)preheat;
- (id)queryTaskWithContext:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activateSync;
- (void)activate;

@end

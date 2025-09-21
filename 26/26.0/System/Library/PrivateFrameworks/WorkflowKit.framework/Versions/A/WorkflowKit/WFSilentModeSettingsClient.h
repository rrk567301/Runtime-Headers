@class NSString;

@interface WFSilentModeSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canRunIntent;
+ (void)createClientWithCompletionHandler:(id /* block */)a0;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
+ (void)getBookmarkForFirstEventAfterBookmark:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;

- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end

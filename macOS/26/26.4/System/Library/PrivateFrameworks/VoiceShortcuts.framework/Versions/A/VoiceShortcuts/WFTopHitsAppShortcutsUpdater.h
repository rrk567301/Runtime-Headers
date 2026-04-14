@interface WFTopHitsAppShortcutsUpdater : NSObject

@property (nonatomic, readonly) BOOL shouldTriggerUpdate;

- (void)updateWithCompletion:(id /* block */)a0;
- (id)init;

@end

@class NSString, _NSQuickActionProvider;
@protocol WFQuickActionSurfaceStatusObserver;

@interface WFQuickActionStatusProvider : NSObject <_NSQuickActionProviderObserver, WFQuickActionSurfaceStatusProvider>

@property (retain, nonatomic) _NSQuickActionProvider *provider;
@property (readonly, nonatomic) NSString *presentationMode;
@property (nonatomic) id<WFQuickActionSurfaceStatusObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)quickActionsDidChange;
- (void)quickActionsShortcutsDidChange;
- (BOOL)visibilityOfWorkflow:(id)a0;
- (BOOL)setVisibility:(BOOL)a0 ofWorkflow:(id)a1;
- (id)initWithPresentationMode:(id)a0 observer:(id)a1;
- (id)quickActionMatchingWorkflow:(id)a0;

@end

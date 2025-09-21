@class NSString, NSServicesMonitor;
@protocol WFQuickActionSurfaceStatusObserver;

@interface WFServicesStatusProvider : NSObject <NSServicesMonitorObserver, WFQuickActionSurfaceStatusProvider>

@property (retain, nonatomic) NSServicesMonitor *servicesMonitor;
@property (nonatomic) id<WFQuickActionSurfaceStatusObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)servicesDidChange;
- (id)globalKeyboardShortcutForWorkflow:(id)a0;
- (void)quickActionsShortcutsDidChange;
- (id)serviceForReference:(id)a0;
- (char)setGlobalKeyboardShortcut:(id)a0 forWorkflow:(id)a1;
- (char)setVisibility:(char)a0 ofReference:(id)a1;
- (char)visibilityOfReference:(id)a0;

@end

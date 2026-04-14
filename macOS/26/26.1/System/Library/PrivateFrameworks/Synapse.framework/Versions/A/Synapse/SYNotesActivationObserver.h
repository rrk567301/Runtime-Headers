@class NSArray, SYRunningApplicationsObserver;

@interface SYNotesActivationObserver : NSObject

@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL hasInitialVisibility;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL processingRunningApplications;
@property (copy, nonatomic) NSArray *_notesApps;
@property (retain, nonatomic) SYRunningApplicationsObserver *_runningApplicationsObserver;

- (id)initWithHandler:(id /* block */)a0;
- (void)_runningApplicationsDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateNotesVisibility;
- (void)_updateNotesObserversWithApps:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_notifyHandlerOfVisibility;
- (void)startObservingNotes;
- (void)_startObservingNotes;

@end

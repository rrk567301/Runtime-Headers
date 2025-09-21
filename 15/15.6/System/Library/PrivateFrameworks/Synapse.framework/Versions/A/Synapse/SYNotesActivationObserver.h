@class NSArray, SYRunningApplicationsObserver;

@interface SYNotesActivationObserver : NSObject

@property (nonatomic, getter=isVisible) char visible;
@property (nonatomic) char hasInitialVisibility;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) char processingRunningApplications;
@property (copy, nonatomic) NSArray *_notesApps;
@property (retain, nonatomic) SYRunningApplicationsObserver *_runningApplicationsObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithHandler:(id /* block */)a0;
- (void)_notifyHandlerOfVisibility;
- (void)_runningApplicationsDidChange;
- (void)_startObservingNotes;
- (void)_updateNotesObserversWithApps:(id)a0;
- (void)_updateNotesVisibility;
- (void)startObservingNotes;

@end

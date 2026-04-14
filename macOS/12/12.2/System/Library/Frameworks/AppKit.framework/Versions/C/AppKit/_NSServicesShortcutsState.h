@class NSArray, NSString, WFObservableArrayResult;

@interface _NSServicesShortcutsState : NSObject <WFObservableResultObserver> {
    WFObservableArrayResult *_result;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *shortcutServiceEntries;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setNeedsUpdate;
- (id)parseServicesWorkflows:(id)a0;
- (void)observableResultDidChange:(id)a0;
- (id)initWithObservableResult:(id)a0;

@end

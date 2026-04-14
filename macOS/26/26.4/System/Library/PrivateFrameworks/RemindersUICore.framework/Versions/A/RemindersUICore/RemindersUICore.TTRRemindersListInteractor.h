@class OS_dispatch_queue;

@interface RemindersUICore.TTRRemindersListInteractor : NSObject <REMSaveRequestNotifyChangeDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ optimisticUpdatesDelegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ canChangeSortingStyle;
    void /* unknown type, empty encoding */ defaultListType;
    void /* unknown type, empty encoding */ committer;
    void /* unknown type, empty encoding */ fixedUndoContext;
    void /* unknown type, empty encoding */ removeTemplateCapability;
}

@property (nonatomic, readonly) OS_dispatch_queue *callbackQueue;

- (void).cxx_destruct;
- (id)init;
- (void)notifyEventFromSaveRequest:(id)a0;

@end

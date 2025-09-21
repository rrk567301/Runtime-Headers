@class NSArray;
@protocol _HMTelevisionProfileDelegate;

@interface _HMTelevisionProfile : _HMAccessoryProfile

@property (retain) NSArray *mediaSourceDisplayOrder;
@property (readonly) char mediaSourceDisplayOrderModifiable;
@property (weak) id<_HMTelevisionProfileDelegate> delegate;

- (void).cxx_destruct;
- (id)messageTargetUUID;
- (void)_handleSourceDisplayOrderUpdated:(id)a0;
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)a0;
- (void)_registerNotificationHandlers;
- (id)initWithTelevisionService:(id)a0 linkedServices:(id)a1;
- (char)isMediaSourceDisplayOrderModifiable;
- (id)messageDestination;
- (void)updateMediaSourceDisplayOrder:(id)a0 completionHandler:(id /* block */)a1;

@end

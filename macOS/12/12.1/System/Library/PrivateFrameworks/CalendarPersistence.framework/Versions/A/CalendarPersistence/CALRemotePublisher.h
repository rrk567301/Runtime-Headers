@class NSString, NSError, NSManagedObjectID;
@protocol CALRemotePublisherDelegate;

@interface CALRemotePublisher : CALPublisher <CALPublishOperationDelegate> {
    double _schedulePublishTimer;
    double _minimumPublishInterval;
    BOOL _publishScheduled;
    int _status;
    BOOL _dirty;
    BOOL _oldIsActive;
    BOOL _oldIsAutoUpdating;
    NSError *_lastOperationError;
    id<CALRemotePublisherDelegate> _delegate;
    int _callbackOption;
}

@property (retain) NSManagedObjectID *nodeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorForUnpublishOperation:(id)a0;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setLastUpdate:(id)a0;
- (int)status;
- (void)setActive:(BOOL)a0;
- (void)setStatus:(int)a0;
- (id)remoteOperation;
- (id)lastOperationError;
- (void)cancelSchedulePublish;
- (void)requestAutomaticPublish;
- (void)delayedRequestPublish;
- (id)requestAutomaticPublishOperation;
- (void)startAutomaticPublish:(id)a0;
- (void)setAutoUpdating:(BOOL)a0;
- (void)commonOperationDone:(id)a0;
- (void)schedulePublish;
- (BOOL)persistError:(id)a0 inContext:(id)a1;
- (void)enablePublisher;
- (void)disablePublisher;
- (id)requestPublishOperation;
- (void)startPublish:(id)a0 document:(id)a1;
- (id)requestUnpublishOperation;
- (void)publishDone:(id)a0;
- (void)automaticPublishDone:(id)a0;
- (void)firstPublishDone:(id)a0;
- (void)unpublishDone:(id)a0;
- (void)publishOperation:(id)a0 didFinishWithError:(id)a1;
- (void)publishOperation:(id)a0 progressedToCurrentUnits:(unsigned long long)a1 totalUnits:(unsigned long long)a2;
- (void)startFirstPublish:(id)a0 document:(id)a1;
- (void)startPublish:(id)a0 withData:(id)a1;
- (void)startUnpublish:(id)a0;
- (void)setSchedulePublishTimer:(double)a0;
- (void)setMinimumPublishInterval:(double)a0;
- (id)requestEtagPublishOperation:(id)a0;
- (id)requestFirstPublishOperation;
- (void)requestPublish:(id)a0;
- (id)requestEtagUnpublishOperation:(id)a0;
- (void)setLastOperationError:(id)a0;

@end

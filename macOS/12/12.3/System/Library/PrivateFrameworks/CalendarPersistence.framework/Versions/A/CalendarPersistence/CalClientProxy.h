@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalClientProxy : NSObject <CalendarAgentClient> {
    NSObject<OS_dispatch_group> *_externalGroup;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)dealloc;
- (id)initWithGroup:(id)a0;
- (void)calDavSharedUIDChanged:(id)a0;
- (void)calPersistanceNotification:(id)a0 userInfo:(id)a1;
- (void)agentUpdatedCache:(id)a0;
- (void)_waitForReady;
- (void)testMethod;

@end

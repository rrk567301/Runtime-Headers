@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)initWithMachServiceName:(id)a0;
- (id)description;
- (void)_invalidateConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_activeConnection;
- (void)deactivate;
- (void)activate;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end

@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (id)description;
- (id)initWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)_invalidateConnection;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;
- (id)_activeConnection;

@end

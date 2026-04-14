@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void)_invalidateConnection;
- (id)description;
- (void)deactivate;
- (id)_activeConnection;
- (void)activate;
- (void).cxx_destruct;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end

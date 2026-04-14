@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)description;
- (void)activate;
- (id)_activeConnection;
- (void)_invalidateConnection;
- (void)deactivate;
- (void)dealloc;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end

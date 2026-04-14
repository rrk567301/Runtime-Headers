@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)deactivate;
- (id)_activeConnection;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (id)description;
- (void)dealloc;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end

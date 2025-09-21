@class NSNotificationCenter, NSString;
@protocol HMDarwinNotificationProvider;

@interface HMXPCClientDataSource : HMFObject <HMXPCClientDataSource>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createXPCClientConnectionProxyWithUserInfo:(id)a0 refreshHandler:(id /* block */)a1;
- (id)createXPCConnectionWithMachServiceName:(id)a0;

@end

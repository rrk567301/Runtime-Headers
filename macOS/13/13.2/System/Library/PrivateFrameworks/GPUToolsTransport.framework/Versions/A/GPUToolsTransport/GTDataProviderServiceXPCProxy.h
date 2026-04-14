@class GTServiceConnection, NSObject;
@protocol OS_os_log;

@interface GTDataProviderServiceXPCProxy : NSObject <GTDataProviderService> {
    GTServiceConnection *_connection;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (id)getData:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)uploadFragment:(id)a0 forHandle:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)maxFragmentBytesForDevice:(id)a0;
- (BOOL)targetsDevice:(id)a0;

@end

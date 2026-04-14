@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface GTDataProviderStore : NSObject <GTDataProviderService> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dataStore;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)getData:(unsigned long long)a0;
- (void)uploadFragment:(id)a0 forHandle:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end

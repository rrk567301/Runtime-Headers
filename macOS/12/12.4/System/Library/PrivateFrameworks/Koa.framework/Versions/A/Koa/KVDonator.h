@class NSString, NSObject;
@protocol OS_dispatch_queue, KVDonateServiceProvider;

@interface KVDonator : NSObject {
    long long _itemType;
    NSString *_originAppId;
    NSString *_userId;
    NSString *_deviceId;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    unsigned long long _timeoutNanos;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 error:(id *)a2;
+ (id)donatorWithServiceProvider:(id)a0 itemType:(long long)a1 originAppId:(id)a2 error:(id *)a3;
+ (id)donatorWithServiceProvider:(id)a0 itemType:(long long)a1 originAppId:(id)a2 deviceId:(id)a3 userId:(id)a4 error:(id *)a5;
+ (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 userId:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (void)donateWithOptions:(unsigned short)a0 usingStream:(id /* block */)a1;
- (id)initWithQueue:(id)a0 itemType:(long long)a1 originAppId:(id)a2 deviceId:(id)a3 userId:(id)a4 serviceProvider:(id)a5 timeoutNanos:(unsigned long long)a6;

@end

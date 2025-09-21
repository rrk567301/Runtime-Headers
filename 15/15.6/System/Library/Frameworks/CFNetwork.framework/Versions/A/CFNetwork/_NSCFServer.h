@class NSString, NSDictionary, NSNumber, NSObject;
@protocol OS_tcp_listener;

@interface _NSCFServer : NSObject {
    NSNumber *_listenerID;
    NSObject<OS_tcp_listener> *_listener;
}

@property long long type;
@property long long listenerPort;
@property (retain) NSString *interface;
@property (retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled) char enableCoprocessorInterface;

+ (char)stopAll;
+ (id)adressesForInterface:(id)a0;
+ (char)startSocksServerWithPort:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)start;
- (char)stop;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 port:(long long)a1;
- (id)initWithType:(long long)a0 port:(long long)a1 interface:(id)a2;

@end

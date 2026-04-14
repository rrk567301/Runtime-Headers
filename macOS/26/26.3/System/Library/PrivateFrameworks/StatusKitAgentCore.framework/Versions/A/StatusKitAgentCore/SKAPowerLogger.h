@interface SKAPowerLogger : NSObject {
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) SKAPowerLogger *shared;

- (id)init;
- (void).cxx_destruct;
- (void)logEvent:(long long)a0 ofType:(long long)a1 channelType:(long long)a2 identifier:(id)a3;
- (void)logEvent:(long long)a0 ofType:(long long)a1 onDatabaseChannel:(id)a2;
- (void)logEvent:(long long)a0 ofType:(long long)a1 onDatabaseChannels:(id)a2;

@end

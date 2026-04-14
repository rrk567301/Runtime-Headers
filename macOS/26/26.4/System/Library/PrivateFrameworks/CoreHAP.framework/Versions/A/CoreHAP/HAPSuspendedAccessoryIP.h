@class NSArray, NSString;

@interface HAPSuspendedAccessoryIP : HAPSuspendedAccessory {
    struct AsyncConnection { } *_connection;
}

@property (nonatomic) unsigned long long timeout;
@property (readonly, nonatomic) NSArray *wakeTuples;
@property (retain, nonatomic) NSString *dnsName;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_closeConnection;
- (void)dealloc;
- (void)wakeWithCompletion:(id /* block */)a0;
- (id)_wakeWithTuple:(id)a0 dnsName:(id)a1;
- (id)initWithName:(id)a0 identifier:(id)a1 wakeTuples:(id)a2 queue:(id)a3;

@end

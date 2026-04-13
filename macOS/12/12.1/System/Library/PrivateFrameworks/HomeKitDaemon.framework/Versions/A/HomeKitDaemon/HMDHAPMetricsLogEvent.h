@class HMFUnfairLock;

@interface HMDHAPMetricsLogEvent : HMMLogEvent {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) unsigned long long sentHTTPRequests;
@property (readonly, nonatomic) unsigned long long receivedHTTPResponses;
@property (readonly, nonatomic) unsigned long long receivedHTTPEvents;
@property (readonly, nonatomic) unsigned long long accessoryServerInvalidations;
@property (readonly, nonatomic) unsigned long long btleConnections;
@property (readonly, nonatomic) unsigned long long btleDiscoveries;
@property (readonly, nonatomic) unsigned long long btleConnectionPerReasons;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithHAPAccessoryServer:(id)a0;

@end

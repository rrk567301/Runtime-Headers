@interface MSPSharedTripFetchedStatus : NSObject {
    double _fetchedTimestamp;
    double _ttl;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isFailedRequest) BOOL failedRequest;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStatus:(long long)a0;
- (BOOL)isEffectivelyEqualToStatus:(id)a0;

@end

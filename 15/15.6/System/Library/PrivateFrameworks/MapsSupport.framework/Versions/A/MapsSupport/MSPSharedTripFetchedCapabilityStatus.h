@class NSString;

@interface MSPSharedTripFetchedCapabilityStatus : NSObject <NSSecureCoding> {
    double _fetchedTimestamp;
    double _ttl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilityType;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic, getter=isExpired) char expired;
@property (readonly, nonatomic, getter=isFailedRequest) char failedRequest;
@property (readonly, nonatomic, getter=isBlocked) char blocked;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateTTL;
- (id)initWithCapabilityType:(unsigned long long)a0 serviceName:(id)a1 status:(long long)a2;
- (char)isEffectivelyEqualToStatus:(id)a0;

@end

@class NSString, HAPAccessory, NSDictionary, NSDate, NSNumber;

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *serverIdentifier;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (readonly, nonatomic) long long linkType;
@property (retain) HAPAccessory *hapAccessory;
@property (copy) NSString *protocolVersion;
@property (getter=isReachable) BOOL reachable;
@property (readonly, copy) NSDate *reachableLastChangedTime;
@property (readonly) NSDictionary *transportInfoDictionary;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)report;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithServerIdentifier:(id)a0 instanceID:(id)a1 linkType:(long long)a2;
- (id)reportWithReason:(long long)a0;

@end

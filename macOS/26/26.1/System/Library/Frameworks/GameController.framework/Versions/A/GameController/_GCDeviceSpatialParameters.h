@class NSNumber;

@interface _GCDeviceSpatialParameters : GCDeviceObjectParameters <NSSecureCoding> {
    NSNumber *_trackingSourceIOServiceRegistryID;
    long long _inherentChirality;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end

@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSDate *locationUpdateTimestamp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 locationUpdateTimestamp:(id)a1;

@end

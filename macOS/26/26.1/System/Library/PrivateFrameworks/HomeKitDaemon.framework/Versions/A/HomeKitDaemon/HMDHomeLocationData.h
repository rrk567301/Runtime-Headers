@class NSNumber, CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CLLocation *location;
@property (readonly) NSDate *locationUpdateTimestamp;
@property (readonly) NSNumber *locationSource;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 locationUpdateTimestamp:(id)a1 locationSource:(id)a2;

@end

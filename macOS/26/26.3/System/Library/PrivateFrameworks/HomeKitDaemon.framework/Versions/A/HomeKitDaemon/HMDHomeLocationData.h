@class NSNumber, CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CLLocation *location;
@property (readonly) NSDate *locationUpdateTimestamp;
@property (readonly) NSNumber *locationSource;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 locationUpdateTimestamp:(id)a1 locationSource:(id)a2;

@end

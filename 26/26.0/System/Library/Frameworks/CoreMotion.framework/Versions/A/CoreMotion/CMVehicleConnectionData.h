@class NSDate;

@interface CMVehicleConnectionData : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

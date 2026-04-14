@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastUpdateCheck;
@property (readonly, nonatomic) NSDate *nextUpdateCheck;
@property (readonly, nonatomic) BOOL usingModernUpdatesCheck;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastUpdateCheck;
@property (readonly, nonatomic) NSDate *nextUpdateCheck;
@property (readonly, nonatomic) char usingModernUpdatesCheck;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

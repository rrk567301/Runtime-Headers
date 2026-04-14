@class NSArray;

@interface FMDRepairDeviceLookupResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *devicesInRepairMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

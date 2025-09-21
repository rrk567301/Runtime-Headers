@class NSArray, NSString;

@interface FMDRepairDeviceContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *selectedDevices;
@property (retain, nonatomic) NSArray *searchIdentifiers;
@property (retain, nonatomic) NSString *ephemeralToken;
@property (nonatomic) long long repairDeviceMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

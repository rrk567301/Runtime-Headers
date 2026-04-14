@class NSString, NSImage, NSUUID, NSDate, NSNumber;

@interface AKiCDPValidationDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceModelClass;
@property (nonatomic) BOOL usesPasscode;
@property (nonatomic) BOOL usesNumericPasscode;
@property (nonatomic) BOOL usesRandomPasscode;
@property (retain, nonatomic) NSNumber *numericPasscodeLength;
@property (retain, nonatomic) NSImage *deviceIcon;
@property (retain, nonatomic) NSUUID *deviceID;
@property (nonatomic) BOOL isCurrentDevice;
@property (retain, nonatomic) NSDate *recordDate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

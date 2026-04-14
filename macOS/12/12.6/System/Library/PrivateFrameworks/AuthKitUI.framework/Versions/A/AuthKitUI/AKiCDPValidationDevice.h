@class NSString, NSImage, NSUUID, NSDate, NSNumber;

@interface AKiCDPValidationDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceName;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceModelClass;
@property BOOL usesPasscode;
@property BOOL usesNumericPasscode;
@property BOOL usesRandomPasscode;
@property (retain) NSNumber *numericPasscodeLength;
@property (retain) NSImage *deviceIcon;
@property (retain) NSUUID *deviceID;
@property BOOL isCurrentDevice;
@property (retain) NSDate *recordDate;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

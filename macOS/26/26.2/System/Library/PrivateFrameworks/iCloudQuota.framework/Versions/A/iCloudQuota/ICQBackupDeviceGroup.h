@class NSString, NSArray;

@interface ICQBackupDeviceGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionHeader;
@property (copy, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSArray *backupDevices;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end

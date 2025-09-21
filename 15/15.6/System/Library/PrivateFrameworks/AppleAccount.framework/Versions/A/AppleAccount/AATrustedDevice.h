@class NSString;

@interface AATrustedDevice : NSObject

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *modelDisplayName;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL3x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL2x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL1x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL3x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL2x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL1x;
@property (readonly, nonatomic) NSString *deviceDetailUri;
@property (readonly, nonatomic) NSString *deviceDetailHttpMethod;
@property (readonly, nonatomic) NSString *pushToken;
@property (readonly, nonatomic) char fmipEnabled;
@property (readonly, nonatomic) char currentDevice;
@property (readonly, nonatomic) char showFMIPLink;
@property (readonly, nonatomic) char showBackupRow;
@property (readonly, nonatomic) char showFMIPRow;
@property (readonly, nonatomic) char showAppleCareRow;
@property (readonly, nonatomic) char injectNativeHeader;
@property (readonly, nonatomic) NSString *FMIPDeviceID;
@property (readonly, nonatomic) NSString *detailDeviceName;
@property (readonly, nonatomic) NSString *detailSubLabel;
@property (readonly, nonatomic) NSString *deviceQualifiedClass;
@property (readonly, nonatomic) NSString *rawLatestBackup;
@property (readonly, nonatomic) NSString *backupUUID;
@property (readonly, nonatomic) NSString *serialNumber;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)updateWithRUIClientInfo:(id)a0;

@end

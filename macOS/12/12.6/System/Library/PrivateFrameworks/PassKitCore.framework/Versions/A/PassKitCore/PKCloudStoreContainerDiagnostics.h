@class NSString;

@interface PKCloudStoreContainerDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) BOOL isSyncEnabled;
@property (readonly, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSString *lastSyncDate;
@property (readonly, nonatomic) BOOL isAccountManateeCapable;
@property (readonly, nonatomic) BOOL isDeviceManateeCapable;
@property (readonly, nonatomic) BOOL isManateeEnabled;

+ (id)turnedOff;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIsEnabled:(BOOL)a0 isSetup:(BOOL)a1 status:(id)a2 isSyncEnabled:(BOOL)a3 syncToken:(id)a4 lastSyncDate:(id)a5 isAccountManateeCapable:(BOOL)a6 isDeviceManateeCapable:(BOOL)a7 isManateeEnabled:(BOOL)a8;

@end

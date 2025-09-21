@class NSString;

@interface PKCloudStoreContainerDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char isSetup;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) char isSyncEnabled;
@property (readonly, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSString *lastSyncDate;
@property (readonly, nonatomic) char didFinishInitialSync;
@property (readonly, nonatomic) char isAccountManateeCapable;
@property (readonly, nonatomic) char isDeviceManateeCapable;
@property (readonly, nonatomic) char isManateeEnabled;

+ (id)turnedOff;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsEnabled:(char)a0 isSetup:(char)a1 status:(id)a2 isSyncEnabled:(char)a3 syncToken:(id)a4 lastSyncDate:(id)a5 didFinishInitialSync:(char)a6 isAccountManateeCapable:(char)a7 isDeviceManateeCapable:(char)a8 isManateeEnabled:(char)a9;

@end

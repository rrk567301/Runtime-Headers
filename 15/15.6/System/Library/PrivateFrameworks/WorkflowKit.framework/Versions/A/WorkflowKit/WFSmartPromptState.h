@class WFContentAttribution, NSString, WFContentLocation;

@interface WFSmartPromptState : NSObject <WFSerializableContent, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFContentAttribution *sourceContentAttribution;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) WFContentLocation *contentDestination;
@property (readonly, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)localizedDeniedPermissionsErrorWithContentDestination:(id)a0;
+ (id)localizedUnlockedDeviceRequiredError;
+ (id)localizedUnsupportedEnvironmentError;
+ (id)stateFromDatabaseData:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)wfSerializedRepresentation;
- (id)localizedDeniedPermissionsError;
- (id)databaseDataWithError:(id *)a0;
- (id)initWithMode:(id)a0 sourceContentAttribution:(id)a1 actionUUID:(id)a2 contentDestination:(id)a3 status:(id)a4;
- (id)localizedExfiltrationRestrictedError;
- (char)matches:(id)a0 ignoringAccountData:(char)a1;
- (id)siriActionToolDescription;
- (id)stateByReplacingAccountWithAppOrigin;
- (id)stateWithStatus:(id)a0;
- (id)stateWithStatus:(id)a0 actionUUID:(id)a1;

@end

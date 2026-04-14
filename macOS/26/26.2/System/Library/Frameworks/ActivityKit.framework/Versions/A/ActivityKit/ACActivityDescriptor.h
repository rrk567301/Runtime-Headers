@class NSString, NSDictionary, NSData, NSDate, ACActivityPresentationOptions;

@interface ACActivityDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSDictionary *sceneTargetBundleIdentifiers;
@property (copy, nonatomic) NSDictionary *alertSceneTargetBundleIdentifiers;
@property (retain, nonatomic) ACActivityPresentationOptions *presentationOptions;
@property (nonatomic) BOOL isEphemeral;
@property (nonatomic) BOOL isMomentary;
@property (nonatomic) BOOL isImportant;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSData *descriptorData;
@property (copy, nonatomic) NSDictionary *contentTypesByDestination;
@property (copy, nonatomic) NSDictionary *alertContentTypesByDestination;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier;
@property (copy, nonatomic) NSString *localizedAppName;
@property (nonatomic) long long protectionClass;
@property (readonly, copy, nonatomic) NSString *platterTargetBundleIdentifier;
@property (readonly, nonatomic) long long contentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)alertContentTypeForDestination:(id)a0;
- (long long)contentTypeForDestination:(id)a0;
- (id)initWithIdentifier:(id)a0 sceneTargets:(id)a1 alertSceneTargets:(id)a2 presentationOptions:(id)a3 isEphemeral:(BOOL)a4 isMomentary:(BOOL)a5 isImportant:(BOOL)a6 createdDate:(id)a7 descriptorData:(id)a8 contentTypesByDestination:(id)a9 alertContentTypesByDestination:(id)a10 remoteDeviceIdentifier:(id)a11 localizedAppName:(id)a12 protectionClass:(long long)a13;

@end

@class NSString;

@interface BMSystemSettingsMultitasking : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char childAccount;
@property (nonatomic) char hasChildAccount;
@property (readonly, nonatomic) char firstUpdate;
@property (nonatomic) char hasFirstUpdate;
@property (readonly, nonatomic) char buddySetup;
@property (nonatomic) char hasBuddySetup;
@property (readonly, nonatomic) char buddySetupMultitaskingOff;
@property (nonatomic) char hasBuddySetupMultitaskingOff;
@property (readonly, nonatomic) NSString *multitaskingOption;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithChildAccount:(id)a0 firstUpdate:(id)a1 buddySetup:(id)a2 buddySetupMultitaskingOff:(id)a3 multitaskingOption:(id)a4 source:(id)a5;

@end

@class NSString, NSArray, NSDate;

@interface BMProactiveHarvestingNotificationStack : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSArray *notificationIDs;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *threadID;
@property (readonly, nonatomic) long long stackState;
@property (nonatomic) BOOL hasStackState;
@property (readonly, nonatomic) long long sectionID;
@property (nonatomic) BOOL hasSectionID;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_notificationIDsJSONArray;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 notificationIDs:(id)a2 appBundleID:(id)a3 threadID:(id)a4 stackState:(id)a5 sectionID:(id)a6 contentProtection:(id)a7 personaId:(id)a8;

@end

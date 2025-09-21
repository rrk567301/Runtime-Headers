@class NSArray, NSString, NSDictionary, NSData, NSNumber;

@interface APSPreferences : NSObject

@property (retain, nonatomic) NSArray *activationRecordListeners;
@property (readonly, nonatomic) NSString *albertName;
@property (retain, nonatomic) NSDictionary *allTokenTopics;
@property (retain, nonatomic) NSDictionary *appIds;
@property (retain, nonatomic) NSString *certificateName;
@property (readonly, nonatomic) char detailedLogs;
@property (readonly, nonatomic) char disableAPSKeepAlives;
@property (readonly, nonatomic) char disableFrameworkLogging;
@property (readonly, nonatomic) char enableTCPKeepAlives;
@property (retain, nonatomic) NSDictionary *environments;
@property (readonly, nonatomic) char forceAnEarlyExpiration;
@property (readonly, nonatomic) NSString *keepAliveEnvironment;
@property (readonly, nonatomic) NSNumber *logLevel;
@property (retain, nonatomic) NSString *machineUniqueIdentifier;
@property (retain, nonatomic) NSDictionary *persistentTopics;
@property (retain, nonatomic) NSDictionary *systemUsers;
@property (retain, nonatomic) NSData *platformSerial;
@property (readonly, nonatomic) NSNumber *statusDumpInterval;
@property (retain, nonatomic) NSData *storageId;
@property (readonly, nonatomic) char writeLogs;

+ (id)preferences;

- (char)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)objectForKey:(id)a0 havingClass:(Class)a1;

@end

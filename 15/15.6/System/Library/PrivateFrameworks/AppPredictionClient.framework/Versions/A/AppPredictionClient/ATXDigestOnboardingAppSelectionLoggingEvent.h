@class NSUUID, NSString;

@interface ATXDigestOnboardingAppSelectionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long avgNumBasicNotifications;
@property (readonly, nonatomic) unsigned long long avgNumMessageNotfications;
@property (readonly, nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) char addedToDigest;
@property (readonly, nonatomic) char wasShownInDigestOnboarding;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithSessionUUID:(id)a0 bundleId:(id)a1 avgNumBasicNotifications:(unsigned long long)a2 avgNumMessageNotifications:(unsigned long long)a3 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)a4 rank:(unsigned long long)a5 addedToDigest:(char)a6 wasShownInDigestOnboarding:(char)a7;

@end

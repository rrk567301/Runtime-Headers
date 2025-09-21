@class NSString, NSUUID, AVCSessionABTestConfiguration, NSDate, NSObject;
@protocol OS_nw_activity, NSCopying;

@interface AVCSessionConfiguration : NSObject <NSCopying> {
    long long _sessionMode;
}

@property (nonatomic) long long sessionMode;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) char outOfProcessCodecsEnabled;
@property (copy, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) char oneToOneModeEnabled;
@property (nonatomic, getter=isRemoteScreenControlEnabled) char remoteScreenControlEnabled;
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity;
@property (copy, nonatomic) NSUUID *conversationID;
@property (copy, nonatomic) NSDate *conversationTimeBase;
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated;
@property (copy, nonatomic) AVCSessionABTestConfiguration *abTestConfiguration;

+ (long long)clientSessionModeWithSessionMode:(long long)a0;
+ (long long)sessionModeWithClientSessionMode:(long long)a0;
+ (id)stringFromSessionMode:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)dictionary;
- (void)cleanupNwActivity;
- (id)deserializeNwActivity:(id)a0;
- (id)serializeNwActivity:(id)a0;
- (void)setUpWithDictionary:(id)a0;

@end

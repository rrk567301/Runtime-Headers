@class NSUUID, NSString, NSDate, NSObject;
@protocol OS_nw_activity, NSCopying;

@interface VCSessionConfiguration : NSObject

@property (nonatomic) long long sessionMode;
@property (retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, getter=isOneToOneModeEnabled) char oneToOneModeEnabled;
@property (nonatomic, getter=isOneToOneAuthenticationTagEnabled) char oneToOneAuthenticationTagEnabled;
@property (nonatomic, getter=isGftTLEEnabled) char gftTLEEnabled;
@property (nonatomic, getter=isRemoteScreenControlEnabled) char remoteScreenControlEnabled;
@property (nonatomic) char isGKVoiceChat;
@property (copy, nonatomic) NSUUID *conversationID;
@property (copy, nonatomic) NSDate *conversationTimeBase;
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated;
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) char outOfProcessCodecsEnabled;

- (void)dealloc;
- (id)init;
- (char)applyConfigurationUsingClientDict:(id)a0;
- (void)applyDefaultsConfigurationOverrides;
- (void)cleanupNwActivity;
- (id)initWithClientDictionary:(id)a0;
- (char)updateWithClientDictionary:(id)a0;

@end

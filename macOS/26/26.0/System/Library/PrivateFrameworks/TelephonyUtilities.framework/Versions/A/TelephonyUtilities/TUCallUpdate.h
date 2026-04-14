@class TUHandle, NSUUID, TUCallProvider, TUCallServicesInterface;
@protocol TUFeatureFlags;

@interface TUCallUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<TUFeatureFlags> featureFlags;
@property (retain, nonatomic) TUCallServicesInterface *callServicesInterface;
@property (copy, nonatomic) id /* block */ contactsCountBlock;
@property (nonatomic) long long priority;
@property (nonatomic) long long junkConfidence;
@property (retain, nonatomic) TUCallProvider *provider;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic) unsigned long long remoteParticipantCount;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic, getter=isConversation) BOOL conversation;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *callUUID;
@property (nonatomic, getter=isAnsweringMachineAvailable) BOOL answeringMachineAvailable;
@property (nonatomic, getter=isEligibleForScreening) BOOL eligibleForScreening;

- (id)initWithProvider:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHostEligibleForScreening;

@end

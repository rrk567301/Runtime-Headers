@class LNExportedContentConfiguration, NSUUID, NSString, LNSystemContext, NSNumber, LNEnvironment;

@interface LNActionExecutorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *executionUUID;
@property (copy, nonatomic) NSString *clientLabel;
@property (nonatomic) unsigned short source;
@property (copy, nonatomic) NSString *sourceOverride;
@property (nonatomic) long long kind;
@property (nonatomic) long long interactionMode;
@property (nonatomic) long long priority;
@property (nonatomic) long long assistantDismissalPolicy;
@property (copy, nonatomic) NSNumber *viewActionIdentifier;
@property (nonatomic) BOOL donateToTranscript;
@property (nonatomic) BOOL requestUnlockIfNeeded;
@property (copy, nonatomic) LNEnvironment *environment;
@property (copy, nonatomic) LNSystemContext *systemContext;
@property (nonatomic) BOOL allowsPrepareBeforePerform;
@property (nonatomic) double connectionOperationTimeout;
@property (copy, nonatomic) LNExportedContentConfiguration *exportedContentConfiguration;
@property (nonatomic) BOOL preferNoticePresentation;
@property (nonatomic) BOOL convertArrayResultToAsyncSequence;
@property (nonatomic) BOOL validateConstraints;
@property (nonatomic) BOOL allowLiveActivities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

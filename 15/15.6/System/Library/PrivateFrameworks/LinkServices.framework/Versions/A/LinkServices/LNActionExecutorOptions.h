@class LNExportedContentConfiguration, NSUUID, NSString, LNSystemContext, NSNumber, LNEnvironment;

@interface LNActionExecutorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *executionUUID;
@property (copy, nonatomic) NSString *clientLabel;
@property (nonatomic) unsigned short source;
@property (copy, nonatomic) NSString *sourceOverride;
@property (nonatomic) long long kind;
@property (nonatomic) long long interactionMode;
@property (copy, nonatomic) NSNumber *viewActionIdentifier;
@property (nonatomic) char donateToTranscript;
@property (nonatomic) char requestUnlockIfNeeded;
@property (copy, nonatomic) LNEnvironment *environment;
@property (copy, nonatomic) LNSystemContext *systemContext;
@property (nonatomic) char allowsPrepareBeforePerform;
@property (nonatomic) double connectionOperationTimeout;
@property (copy, nonatomic) LNExportedContentConfiguration *exportedContentConfiguration;
@property (nonatomic) char preferNoticePresentation;
@property (nonatomic) char convertArrayResultToAsyncSequence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

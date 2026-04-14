@class NSUUID, NSString, NSArray, NSDate, LNActionOutput, LNAction, BMAppIntentInvocation, LNTranscriptDonationPolicy;

@interface LNTranscriptActionRecord : NSObject <NSSecureCoding, BMStoreData> {
    LNAction *_originalAction;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, nonatomic) BOOL duplicateActionData;
@property (readonly, nonatomic) BOOL hasNextAction;
@property (copy, nonatomic) LNTranscriptDonationPolicy *policy;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned short source;
@property (readonly, copy, nonatomic) NSString *clientLabel;
@property (readonly, copy, nonatomic) NSUUID *executionUUID;
@property (readonly, copy, nonatomic) NSDate *executionDate;
@property (readonly, copy, nonatomic) LNAction *originalAction;
@property (readonly, copy, nonatomic) LNAction *resolvedAction;
@property (readonly, copy, nonatomic) LNActionOutput *actionOutput;
@property (readonly, copy, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)datastoreVersion;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 originalAction:(id)a5 resolvedAction:(id)a6 actionOutput:(id)a7 predictions:(id)a8 policy:(id)a9;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 action:(id)a5 resolvedAction:(id)a6 actionOutput:(id)a7 predictions:(id)a8;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 originalAction:(id)a5 resolvedAction:(id)a6 actionOutput:(id)a7 predictions:(id)a8;
- (void)asBMAppIntentInvocationWithCompletionHandler:(void (^)(BMAppIntentInvocation *))a0;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 action:(id)a5 resolvedAction:(id)a6 actionOutput:(id)a7 predictions:(id)a8 policy:(id)a9;

@end

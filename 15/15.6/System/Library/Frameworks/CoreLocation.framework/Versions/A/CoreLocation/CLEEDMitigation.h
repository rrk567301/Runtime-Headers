@interface CLEEDMitigation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char newStreamingAllowed;
@property (nonatomic) char dropStreaming;
@property (nonatomic) long long streamingFPS;
@property (nonatomic) long long streamingBitrate;
@property (nonatomic) char newUploadAllowed;
@property (nonatomic) long long uploadMigitation;
@property (nonatomic) long long source;

+ (const char *)sourceAsString:(long long)a0;
+ (id)newMitigationFromDict:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)anyChangeToNewRequestsComparedTo:(id)a0;
- (id)initWithStreamingAllowed:(char)a0 framerateFps:(long long)a1 bitrateKbps:(long long)a2 dropStreaming:(char)a3 uploadAllowed:(char)a4 uploadMitigation:(long long)a5 source:(long long)a6;
- (char)needsRequestStateUpdateComparedTo:(id)a0;
- (id)newMitigationDict;
- (const char *)toCLEEDUploadMitigationString:(long long)a0;
- (char)updateIfDifferentFrom:(id)a0;
- (char)updateWorseMitigationsFrom:(id)a0;

@end

@interface TUPodcastRecordingSession : TUCallRecordingSessionBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int recordingState;
@property (nonatomic, getter=isInitiatedLocally) BOOL initiatedLocally;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 state:(int)a1 callUUID:(id)a2 requestUUID:(id)a3 recordingStartedDate:(id)a4 recordingEndedDate:(id)a5 isRedisclosing:(BOOL)a6 isInitiatedLocally:(BOOL)a7;
- (BOOL)isEqualToPodcastSession:(id)a0;

@end

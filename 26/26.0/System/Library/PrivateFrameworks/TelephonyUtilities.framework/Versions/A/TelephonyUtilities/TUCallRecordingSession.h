@class NSString;

@interface TUCallRecordingSession : TUCallRecordingSessionBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int recordingState;
@property (retain, nonatomic) NSString *destinationBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 state:(int)a1 callUUID:(id)a2 requestUUID:(id)a3 recordingStartedDate:(id)a4 recordingEndedDate:(id)a5 destinationBundleIdentifier:(id)a6 isRedisclosing:(BOOL)a7;
- (BOOL)isEqualToRecordingSession:(id)a0;

@end

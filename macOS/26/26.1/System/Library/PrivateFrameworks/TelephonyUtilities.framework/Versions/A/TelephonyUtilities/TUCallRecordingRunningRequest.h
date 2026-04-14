@class NSUUID;

@interface TUCallRecordingRunningRequest : TUCallRecordingRequest

@property (retain, nonatomic) NSUUID *recordingSessionUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCall:(id)a0;

@end

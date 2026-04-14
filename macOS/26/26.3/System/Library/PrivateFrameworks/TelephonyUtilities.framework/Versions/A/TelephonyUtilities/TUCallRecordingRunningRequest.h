@class NSUUID;

@interface TUCallRecordingRunningRequest : TUCallRecordingRequest

@property (retain, nonatomic) NSUUID *recordingSessionUUID;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCall:(id)a0;

@end

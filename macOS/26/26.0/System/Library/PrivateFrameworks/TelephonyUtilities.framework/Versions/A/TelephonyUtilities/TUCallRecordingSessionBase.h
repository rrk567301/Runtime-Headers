@class NSUUID, NSString, NSDate;

@interface TUCallRecordingSessionBase : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSString *callUUID;
@property (retain, nonatomic) NSDate *recordingStartedDate;
@property (retain, nonatomic) NSDate *recordingEndedDate;
@property (nonatomic, getter=isRedisclosing) BOOL redisclosing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 callUUID:(id)a1 requestUUID:(id)a2 recordingStartedDate:(id)a3 recordingEndedDate:(id)a4 isRedisclosing:(BOOL)a5;
- (BOOL)isEqualToRecordingSessionBase:(id)a0;

@end

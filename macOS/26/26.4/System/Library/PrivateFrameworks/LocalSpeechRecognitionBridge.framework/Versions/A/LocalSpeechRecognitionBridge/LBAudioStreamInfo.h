@class NSString, NSUUID;

@interface LBAudioStreamInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long audioRecordType;
@property (copy, nonatomic) NSString *audioRecordDeviceId;
@property (copy, nonatomic) NSString *recordRoute;
@property (nonatomic) long long audioFormat;
@property (readonly, copy, nonatomic) NSUUID *streamId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioRecordType:(long long)a0 audioRecordDeviceId:(id)a1 recordRoute:(id)a2 audioFormat:(long long)a3 streamIdentifier:(id)a4;

@end

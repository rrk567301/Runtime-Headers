@class NSNumber;

@interface HMAccessoryDiagnosticsOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char metadataRequired;
@property (readonly, nonatomic) NSNumber *logSize;
@property (readonly, nonatomic) char recordAudio;
@property (readonly, nonatomic) char enableAudioClips;
@property (readonly, nonatomic) NSNumber *delay;
@property (readonly, nonatomic) long long snapshotType;
@property (retain, nonatomic) NSNumber *matterLogType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)payloadMetadata;
- (id)initWithLogSizeBytes:(id)a0 delaySeconds:(id)a1 snapshotType:(long long)a2 recordAudio:(char)a3 enableAudioClips:(char)a4 cloudkitMetadataRequired:(char)a5;

@end

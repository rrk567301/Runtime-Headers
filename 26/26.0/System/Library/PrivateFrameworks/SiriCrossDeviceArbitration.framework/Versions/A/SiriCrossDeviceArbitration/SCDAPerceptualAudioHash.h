@class NSData;

@interface SCDAPerceptualAudioHash : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned short pHash;
@property (nonatomic) unsigned char scoreAudioIntensity;
@property (nonatomic) unsigned char userConfidence;
@property (nonatomic) unsigned long long voiceTriggerTime;
@property (nonatomic) unsigned char frac;

+ (id)_audioHashFileBaseDirectory;
+ (id)_audioHashFilePath;
+ (id)tryToRetrieveAudioHashFromFile;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPhash:(unsigned short)a0 scoreAudioIntensity:(unsigned char)a1 userConfidence:(unsigned char)a2 voiceTriggerTime:(unsigned long long)a3 frac:(unsigned char)a4;

@end

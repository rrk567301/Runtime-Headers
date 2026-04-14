@class NSData;

@interface LBAudioChunk : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (readonly, nonatomic) unsigned long long sampleByteDepth;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) unsigned long long arrivalHostTimeToAudioRecorder;
@property (readonly, nonatomic) BOOL isFloat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 numSamples:(unsigned long long)a1 sampleByteDepth:(unsigned long long)a2 startSampleCount:(unsigned long long)a3 hostTime:(unsigned long long)a4 arrivalHostTimeToAudioRecorder:(unsigned long long)a5 isFloat:(BOOL)a6;

@end

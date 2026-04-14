@class NSArray;

@interface LBAudioPacket : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSArray *chunks;
@property (nonatomic) double duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChunks:(id)a0 duration:(double)a1;
- (id)initWithChunks:(id)a0 duration:(double)a1 index:(unsigned long long)a2;
- (id)initWithChunks:(id)a0 index:(unsigned long long)a1;
- (id)initWithChunks:(id)a0 startSampleCount:(unsigned long long)a1 numSamples:(unsigned long long)a2;

@end

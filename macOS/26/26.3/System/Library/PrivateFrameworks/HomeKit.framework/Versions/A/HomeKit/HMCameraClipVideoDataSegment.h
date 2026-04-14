@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment

@property (readonly) double duration;
@property (readonly) double timeOffset;

+ (BOOL)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithByteLength:(unsigned long long)a0 byteOffset:(unsigned long long)a1 duration:(double)a2 timeOffset:(double)a3;

@end

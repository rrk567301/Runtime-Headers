@class NSString;

@interface CMIOExtensionSample : NSObject <NSCopying, NSSecureCoding> {
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;

+ (id)sampleWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyXPCDictionary;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end

@class NSString;

@interface CMIOExtensionSample : NSObject <NSCopying, NSSecureCoding> {
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    unsigned int _mediaType;
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly) unsigned int mediaType;

+ (id)sampleWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyXPCDictionary;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end

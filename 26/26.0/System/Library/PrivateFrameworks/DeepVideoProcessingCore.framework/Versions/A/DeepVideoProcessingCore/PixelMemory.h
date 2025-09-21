@interface PixelMemory : NSObject {
    BOOL _readBufferOnly;
}

@property (nonatomic) struct __CVBuffer { } *buf;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int stride;
@property (nonatomic) int stridePlane2;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned char channels;
@property (nonatomic) int bytePerPixel;
@property (nonatomic) BOOL skipClamp;
@property (nonatomic) char *pMemory;
@property (nonatomic) char *pMemoryPlane2;

- (void)dealloc;
- (float)readFloatAtX:(int)a0 Y:(int)a1;
- (void)writeFloat:(float)a0 X:(int)a1 Y:(int)a2;
- (void /* unknown type, empty encoding */)SampleFourChannelAtX:(float)a0 Y:(float)a1;
- (void)writeValue:(SEL)a0 X:(int)a1 Y:(int)a2;
- (void)initImageWithValue:(unsigned char)a0;
- (id)initWithCvPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCvPixelBuffer:(struct __CVBuffer { } *)a0 skipClamp:(BOOL)a1 readOnly:(BOOL)a2;
- (float)readBlurredYValueAtX:(int)a0 Y:(int)a1;
- (void /* unknown type, empty encoding */)readFourChannelAtX:(int)a0 Y:(int)a1;
- (unsigned char)readOneChannelAtX:(int)a0 Y:(int)a1 Channel:(char)a2;
- (id)readYCbCrValueAtArrayX:(id)a0 ArrayY:(id)a1;
- (void /* unknown type, empty encoding */)readYCbCrValueAtX:(int)a0 Y:(int)a1;
- (float)readYValueAtX:(int)a0 Y:(int)a1;
- (unsigned char)sampleOneChannelAtX:(float)a0 Y:(float)a1 Channel:(char)a2;
- (void)writeValue:(unsigned char)a0 X:(int)a1 Y:(int)a2 Channel:(char)a3;

@end

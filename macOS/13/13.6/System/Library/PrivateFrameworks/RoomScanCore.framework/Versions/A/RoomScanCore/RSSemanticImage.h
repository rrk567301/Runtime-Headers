@interface RSSemanticImage : NSObject {
    union { float *memoryBuffer; struct __CVBuffer *pixelBuffer; } _backing;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct __IOSurface { } *IOSurface;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long channel;
@property (readonly, nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) unsigned int dataType;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void *)data;
- (void)reset;
- (void *)imageOfChannel:(unsigned long long)a0;
- (void)_allocateBacking;
- (void)_deallocateBacking;
- (id)initWithHeight:(unsigned long long)a0 width:(unsigned long long)a1 channel:(unsigned long long)a2;
- (id)initWithHeight:(unsigned long long)a0 width:(unsigned long long)a1 channel:(unsigned long long)a2 backingType:(unsigned long long)a3;
- (id)initWithHeight:(unsigned long long)a0 width:(unsigned long long)a1 channel:(unsigned long long)a2 backingType:(unsigned long long)a3 dataType:(unsigned int)a4;
- (BOOL)isEqualToRSSemanticImage:(id)a0;
- (void)resizeToHeight:(unsigned long long)a0 width:(unsigned long long)a1 channel:(unsigned long long)a2;

@end

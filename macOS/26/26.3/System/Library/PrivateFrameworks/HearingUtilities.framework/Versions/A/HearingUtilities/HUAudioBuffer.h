@interface HUAudioBuffer : NSObject <NSCopying>

@property struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *bufferList;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;

@end

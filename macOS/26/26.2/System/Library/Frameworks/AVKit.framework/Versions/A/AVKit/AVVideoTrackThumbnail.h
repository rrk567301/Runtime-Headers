@interface AVVideoTrackThumbnail : NSObject {
    struct CGImage { } *_image;
}

@property (readonly) unsigned long long index;
@property (readonly) unsigned long long zoomFactor;
@property (readonly) double time;
@property (readonly) struct CGImage { } *image;
@property (readonly) BOOL imageIsPlacehoder;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithTime:(double)a0 index:(unsigned long long)a1;
- (id)initWithTime:(double)a0 index:(unsigned long long)a1 zoomFactor:(unsigned long long)a2;
- (void)setImage:(struct CGImage { } *)a0 isPlaceholder:(BOOL)a1;

@end

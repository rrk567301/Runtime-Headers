@interface AVVideoTrackThumbnail : NSObject {
    struct CGImage { } *_image;
}

@property (readonly) unsigned long long index;
@property (readonly) unsigned long long zoomFactor;
@property (readonly) double time;
@property (readonly) struct CGImage { } *image;
@property (readonly) char imageIsPlacehoder;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithTime:(double)a0 index:(unsigned long long)a1;
- (id)initWithTime:(double)a0 index:(unsigned long long)a1 zoomFactor:(unsigned long long)a2;
- (void)setImage:(struct CGImage { } *)a0 isPlaceholder:(char)a1;

@end

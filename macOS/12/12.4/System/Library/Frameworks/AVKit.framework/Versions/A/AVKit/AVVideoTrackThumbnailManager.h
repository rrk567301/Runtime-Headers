@class AVIterableCache;

@interface AVVideoTrackThumbnailManager : NSObject {
    AVIterableCache *_cachedThumbnails;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)thumbnailWithTime:(double)a0;
- (struct CGImage { } *)_thumbnailImageClosestToTime:(double)a0;
- (void)addThumbnailWithTime:(double)a0 index:(unsigned long long)a1 zoomFactor:(unsigned long long)a2;
- (void)setImage:(struct CGImage { } *)a0 forTime:(double)a1;
- (id)timesOfThumbnailsWithPlaceholderImage;
- (id)allThumbnails;
- (id)thumbnailsWithTimes:(id)a0;

@end

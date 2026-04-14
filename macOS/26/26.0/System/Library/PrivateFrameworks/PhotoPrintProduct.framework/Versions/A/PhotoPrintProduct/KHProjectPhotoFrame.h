@interface KHProjectPhotoFrame : KHModel {
    long long _photoId;
    long long _frameId;
}

- (void)dealloc;
- (void)setPhotoId:(long long)a0;
- (long long)photoId;
- (long long)frameId;
- (void)setFrameId:(long long)a0;
- (void)cacheFrameId:(long long)a0;
- (void)cachePhotoId:(long long)a0;
- (BOOL)isProjectModel;

@end

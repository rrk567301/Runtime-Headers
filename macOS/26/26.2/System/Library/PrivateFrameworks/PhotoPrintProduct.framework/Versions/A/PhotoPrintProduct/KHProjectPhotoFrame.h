@interface KHProjectPhotoFrame : KHModel {
    long long _photoId;
    long long _frameId;
}

- (long long)photoId;
- (void)setPhotoId:(long long)a0;
- (void)dealloc;
- (long long)frameId;
- (void)setFrameId:(long long)a0;
- (void)cacheFrameId:(long long)a0;
- (void)cachePhotoId:(long long)a0;
- (BOOL)isProjectModel;

@end

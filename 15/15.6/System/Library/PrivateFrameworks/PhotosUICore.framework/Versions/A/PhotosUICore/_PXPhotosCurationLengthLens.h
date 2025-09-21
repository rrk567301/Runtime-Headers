@interface _PXPhotosCurationLengthLens : PXPhotosViewLens {
    char _isDefaultCurationLength;
    long long _curationLength;
}

- (char)allowsActionType:(id)a0;
- (long long)curationLength;
- (char)ignoresTopSafeAreaInset;
- (id)initWithCurationLength:(long long)a0 isDefault:(char)a1;
- (char)isDefaultCurationLength;
- (char)wantsCuration;

@end

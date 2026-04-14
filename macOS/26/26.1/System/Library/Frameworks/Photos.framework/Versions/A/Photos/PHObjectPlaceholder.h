@class NSString, PHPhotoLibrary;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
    PHPhotoLibrary *_photoLibrary;
}

@property long long assetMediaType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)photoLibrary;
- (id)localIdentifier;
- (id)initWithLocalIdentifier:(id)a0;

@end

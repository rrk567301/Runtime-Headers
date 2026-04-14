@class NSString, PHPhotoLibrary;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
    PHPhotoLibrary *_photoLibrary;
}

@property long long assetMediaType;

- (id)photoLibrary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)localIdentifier;
- (id)initWithLocalIdentifier:(id)a0;

@end

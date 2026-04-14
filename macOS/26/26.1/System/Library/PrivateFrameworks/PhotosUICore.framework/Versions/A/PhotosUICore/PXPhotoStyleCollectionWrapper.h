@class PXPhotoStyleCollection;

@interface PXPhotoStyleCollectionWrapper : NSObject {
    PXPhotoStyleCollection *_underlyingCollection;
}

+ (id)macStyleCollections;

- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)styleElements;

@end

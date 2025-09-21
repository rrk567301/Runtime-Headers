@class PXPhotoStyleCollection;

@interface PXPhotoStyleCollectionWrapper : NSObject {
    PXPhotoStyleCollection *_underlyingCollection;
}

+ (id)macStyleCollections;

- (id)initWithCollection:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)styleElements;

@end

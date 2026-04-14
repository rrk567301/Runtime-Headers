@class NSArray, ABLocalImageLoader;

@interface ABLocalLargeImageTask : ABTask {
    NSArray *_imageIdentifiers;
    ABLocalImageLoader *_imageLoader;
}

- (id)run:(id *)a0;
- (void)dealloc;
- (id)initWithImageIdentifiers:(id)a0 imagesFolder:(id)a1;

@end

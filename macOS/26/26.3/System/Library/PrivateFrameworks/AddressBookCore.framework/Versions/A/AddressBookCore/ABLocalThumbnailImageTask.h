@class NSArray, ABLocalImageLoader;

@interface ABLocalThumbnailImageTask : ABTask {
    NSArray *_imageIdentifiers;
    ABLocalImageLoader *_imageLoader;
}

- (id)run:(id *)a0;
- (void)dealloc;
- (id)initWithImageIdentifiers:(id)a0 imagesFolder:(id)a1;

@end

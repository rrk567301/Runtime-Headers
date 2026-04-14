@class NSImage, NSData;

@interface ITLibArtwork : NSObject {
    void *_impl;
}

@property (retain, nonatomic) NSImage *cachedImage;
@property (readonly, retain, nonatomic) NSImage *image;
@property (readonly, retain, nonatomic) NSData *imageData;
@property (readonly, nonatomic) unsigned long long imageDataFormat;

- (id)initWithImpl:(void *)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end

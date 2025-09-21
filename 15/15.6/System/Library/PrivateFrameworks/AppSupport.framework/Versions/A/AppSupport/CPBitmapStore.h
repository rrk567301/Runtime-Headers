@class NSString, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface CPBitmapStore : NSObject {
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
}

@property (readonly, nonatomic) int version;
@property (nonatomic) char lockOnRead;
@property (nonatomic) unsigned long long cacheItemLimit;

- (void)dealloc;
- (int)setVersion:(int)a0;
- (void)commitTransaction;
- (void)purge;
- (id)allGroups;
- (struct CGImage { } *)_copyAndStoreImageForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 scale:(double)a4 fillMem:(id /* block */)a5 alternateCompletion:(id /* block */)a6;
- (id)_versionPath;
- (id)cacheNumberForKey:(id)a0;
- (void)commitTxn;
- (struct CGImage { } *)copyAndStoreImageForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(char)a3 scale:(double)a4 draw:(id /* block */)a5;
- (struct CGImage { } *)copyImageForKey:(id)a0;
- (struct CGImage { } *)copyImageForKey:(id)a0 inGroup:(id)a1;
- (char)findImageWithKey:(id)a0 inGroup:(id)a1 andInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a2;
- (unsigned long long)imageCount;
- (id)imageNameForKey:(id)a0 inGroup:(id)a1;
- (id)imagePath;
- (id)initWithPath:(id)a0 version:(int)a1;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)a0 withInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a1;
- (void)removeImagesInGroups:(id)a0;
- (void)removeImagesInGroups:(id)a0 completion:(id /* block */)a1;
- (char)saveImageWithKey:(id)a0 inGroup:(id)a1 andInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a2;
- (void)storeGrayscaleImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(char)a3 scale:(double)a4 data:(id)a5;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 formatColor:(struct CGColor { } *)a4 scale:(double)a5 data:(id)a6;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 scale:(double)a4 data:(id)a5;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(char)a3 scale:(double)a4 data:(id)a5;
- (void)storeImageForKey:(id)a0 inGroup:(id)a1 opaque:(char)a2 image:(struct CGImage { } *)a3;

@end

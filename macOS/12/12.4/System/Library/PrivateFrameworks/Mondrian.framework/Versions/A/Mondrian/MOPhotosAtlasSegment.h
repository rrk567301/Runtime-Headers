@class NSRecursiveLock, NSString, NSArray, NSMutableIndexSet, NSColorSpace, NSMutableDictionary;

@interface MOPhotosAtlasSegment : NSObject {
    NSString *_uniqueIdentifier;
    NSColorSpace *_colorSpace;
    double _thumbnailResolution;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    struct CGSize { double width; double height; } _size;
    NSArray *_mediaItems;
    struct CGColor { } *_emptyColorRef;
    struct CGColor { } *_backgroundColorRef;
    unsigned long long _availableIndexesCount;
    NSMutableIndexSet *_invalidIndexes;
    id _imageRef;
    NSRecursiveLock *_imageLock;
    unsigned long long _version;
    NSMutableDictionary *_pendingThumbnails;
}

+ (id)uniqueIdentifierWithMediaItems:(id)a0;

- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (unsigned long long)version;
- (BOOL)isComplete;
- (struct CGColor { } *)backgroundColor;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)imageRef;
- (void)setImageRef:(id)a0;
- (id)mediaItems;
- (void)invalidateMediaItems:(id)a0;
- (double)thumbnailResolution;
- (id)initWithThumbnailResolution:(double)a0 numberOfColumns:(unsigned long long)a1 numberOfRows:(unsigned long long)a2 mediaItems:(id)a3 emptyColor:(struct CGColor { } *)a4 backgroundColor:(struct CGColor { } *)a5 colorSpace:(id)a6;
- (id)mediaItemVersions:(BOOL)a0;
- (BOOL)hasPendingThumbnails;
- (void)updateWithPendingThumbnails;
- (id)invalidIndexesComparingToMediaItemVersions:(id)a0 includingInvalidation:(BOOL)a1;
- (void)invalidateIndexes:(id)a0;
- (unsigned long long)availableIndexesCount;
- (id)invalidIndexes;
- (void)addPendingThumbnails:(id)a0 atIndexes:(id)a1;
- (id)updateWithThumbnails:(id)a0 atIndexes:(id)a1 succeededIndexes:(id *)a2 colorSpace:(id)a3;

@end

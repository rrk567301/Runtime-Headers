@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol PIEAppDelegateProtocol, KHPhotoLibraryProtocol;

@interface PhotoInferenceEngine : NSObject {
    NSMutableArray *_cachedPhotoAnalyzerPhotoIdsSortedByAccess;
    NSMutableDictionary *_cachedPhotoAnalyzersByPhotoId;
    NSLock *_cachedPhotoAnalyzersLock;
}

@property (retain, nonatomic) id<PIEAppDelegateProtocol> pieAppDelegate;
@property (retain, nonatomic) id<KHPhotoLibraryProtocol> photoAccessAppDelegate;

+ (id)sharedEngine;
+ (void)destroySharedEngine;

- (void)dealloc;
- (id)init;
- (id)analyzerForPhoto:(id)a0;
- (id)analyzerForGroup:(id)a0;
- (id)analyzerForPhotoImage:(struct CGImage { } *)a0 photoID:(id)a1;
- (id)analyzerForImage:(struct CGImage { } *)a0;
- (void)flushCachedAnalyzers;

@end

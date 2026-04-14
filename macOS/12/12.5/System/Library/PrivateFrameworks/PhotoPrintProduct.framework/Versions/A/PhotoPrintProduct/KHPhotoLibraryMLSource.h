@class NSMutableDictionary, MLMediaSource, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface KHPhotoLibraryMLSource : KHPhotoLibraryGenericSource <KHPhotoLibrarySource> {
    NSObject<OS_dispatch_queue> *_mediaSourceRootMediaGroupQueue;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (readonly, nonatomic) NSMutableDictionary *sectionsByKey;
@property (readonly, nonatomic) MLMediaSource *mediaSource;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id iconImage;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) unsigned long long totalNumberOfImages;
@property (readonly, nonatomic) BOOL needsHydration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hydrating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)sectionForIdentifier:(id)a0;
- (BOOL)canHandleURL:(id)a0;
- (void)_updateSections;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;
- (id)_sectionForMediaGroup:(id)a0;
- (void)executeHydrationOnQueue;
- (id)initWithMediaSource:(id)a0;

@end

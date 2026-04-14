@class MPModelRequest, MPSectionedCollection;
@protocol MusicKit_SoftLinking_MacMusicLibraryRequest, MusicKit_SoftLinking_MusicLibraryManager;

@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationRequest : NSObject {
    id<MusicKit_SoftLinking_MusicLibraryManager> _musicKitMusicLibraryManager;
    MPModelRequest<MusicKit_SoftLinking_MacMusicLibraryRequest> *_modelRequest;
    MPSectionedCollection *_representedObjects;
    MPSectionedCollection *_contentDescriptors;
}

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithUnpersonalizedRequest:(id)a0 unpersonalizedContentDescriptors:(id)a1 representedObjects:(id)a2;

@end

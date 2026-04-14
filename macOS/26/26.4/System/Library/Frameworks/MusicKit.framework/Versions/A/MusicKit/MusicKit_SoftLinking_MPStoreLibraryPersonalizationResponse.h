@class MPModelResponse, MPSectionedCollection, MusicKit_SoftLinking_MPMutableSectionedCollection;
@protocol MusicKit_SoftLinking_MacMusicLibraryResponse;

@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationResponse : MusicKit_SoftLinking_MPModelResponse {
    MPModelResponse<MusicKit_SoftLinking_MacMusicLibraryResponse> *_underlyingResponse;
    MPSectionedCollection *_representedObjectResults;
}

@property (readonly, nonatomic) MusicKit_SoftLinking_MPMutableSectionedCollection *representedObjectResults;

- (void).cxx_destruct;
- (id)initWithUnderlyingPersonalizationResponse:(id)a0;
- (id)initWithUnderlyingPersonalizationResponse:(id)a0 representedObjectResults:(id)a1;

@end

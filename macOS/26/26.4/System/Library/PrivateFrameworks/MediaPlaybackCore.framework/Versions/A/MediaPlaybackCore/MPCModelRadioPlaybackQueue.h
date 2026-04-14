@class MPPropertySet, MPCPlaybackRequestEnvironment, NSHashTable, MPModelRadioStation, MPSectionedCollection, MPCModelGenericAVItemUserIdentityPropertySet;

@interface MPCModelRadioPlaybackQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    BOOL _prioritizeStartupOverQuality;
    MPPropertySet *_itemProperties;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPModelRadioStation *_radioStation;
}

@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (readonly, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, nonatomic) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (void)removeAllItems;
- (id)initWithPlaybackContext:(id)a0;
- (id)AVItemAtIndex:(long long)a0;
- (void)updateWithPersonalizedResponse:(id)a0;
- (BOOL)isExplicitItemAtIndex:(long long)a0;
- (id)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)a0;
- (id)tracksByApplyingTracksResponse:(id)a0 currentIndex:(long long)a1;

@end

@class MCPlug, NSDictionary, MCAudioPlaylist;

@interface MCContainer : MCObject {
    unsigned short mFlags;
    unsigned short mSpecialRetainCount;
}

@property (readonly) MCAudioPlaylist *audioPlaylist;
@property (readonly) MCAudioPlaylist *audioPlaylistCreateIfNeeded;
@property (readonly) MCPlug *referencingPlug;
@property (retain) NSDictionary *initialState;

- (void)dealloc;
- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (void)specialRelease;
- (id)specialRetain;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)referenceByPlug:(id)a0;
- (void)unreferenceByPlug:(id)a0;

@end

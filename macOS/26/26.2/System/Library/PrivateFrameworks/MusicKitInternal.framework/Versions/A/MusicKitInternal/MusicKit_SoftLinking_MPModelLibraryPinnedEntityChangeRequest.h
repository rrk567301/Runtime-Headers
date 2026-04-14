@class MPModelLibraryPinnedEntityChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryPinnedEntityChangeRequest : NSObject {
    MPModelLibraryPinnedEntityChangeRequest *_underlyingPinnedEntityChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryPinnedEntityChangeRequest *_underlyingLibraryPinnedEntityChangeRequest;

- (void).cxx_destruct;
- (id)initWithEntityToMove:(id)a0 position:(long long)a1;
- (id)initWithEntityToPin:(id)a0 defaultAction:(long long)a1;
- (id)initWithEntityToUnPin:(id)a0;
- (id)initWithEntityToUpdate:(id)a0 defaultAction:(long long)a1;

@end

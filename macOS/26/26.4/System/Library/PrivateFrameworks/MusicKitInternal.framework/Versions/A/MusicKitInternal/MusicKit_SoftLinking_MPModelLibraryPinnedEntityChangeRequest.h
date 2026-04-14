@class MPModelLibraryPinnedEntityChangeRequest, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelLibraryPinnedEntityChangeRequest : NSObject

@property (readonly, nonatomic) MPModelLibraryPinnedEntityChangeRequest *_underlyingLibraryPinnedEntityChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (nonatomic) long long pinOperation;

- (void).cxx_destruct;
- (id)initWithEntityToMove:(id)a0 position:(long long)a1;
- (id)initWithEntityToPin:(id)a0 defaultAction:(long long)a1;
- (id)initWithEntityToUnPin:(id)a0;
- (id)initWithEntityToUpdate:(id)a0 defaultAction:(long long)a1;

@end

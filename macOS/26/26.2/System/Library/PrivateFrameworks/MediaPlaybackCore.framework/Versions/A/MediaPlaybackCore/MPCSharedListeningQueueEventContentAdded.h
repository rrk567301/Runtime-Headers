@class NSArray, MPModelGenericObject;

@interface MPCSharedListeningQueueEventContentAdded : NSObject

@property (readonly, nonatomic) MPModelGenericObject *container;
@property (readonly, copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)description;
- (id)initWithItems:(id)a0 container:(id)a1;

@end

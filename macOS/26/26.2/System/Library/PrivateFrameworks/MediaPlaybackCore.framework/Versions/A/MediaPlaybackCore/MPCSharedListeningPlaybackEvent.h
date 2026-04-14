@class MPModelGenericObject;

@interface MPCSharedListeningPlaybackEvent : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) MPModelGenericObject *item;

- (id)initWithKind:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKind:(long long)a0 item:(id)a1;

@end

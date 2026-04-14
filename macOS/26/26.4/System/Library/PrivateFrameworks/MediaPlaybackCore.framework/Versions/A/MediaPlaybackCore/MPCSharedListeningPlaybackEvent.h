@class MPModelGenericObject;

@interface MPCSharedListeningPlaybackEvent : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) MPModelGenericObject *item;

- (void).cxx_destruct;
- (id)initWithKind:(long long)a0;
- (id)description;
- (id)initWithKind:(long long)a0 item:(id)a1;

@end

@interface DDBridgeSetRenderFlags : NSObject

@property (nonatomic, readonly) long long partIndex;
@property (nonatomic, readonly) unsigned long long renderFlags;

- (id)init;
- (id)initWithIndex:(long long)a0 renderFlags:(unsigned long long)a1;

@end

@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)uuid;
- (id)displayName;
- (int)index;
- (id)stream;
- (void)setUUID:(id)a0;
- (int)direction;
- (void)setDisplayName:(id)a0;
- (void)setDirection:(int)a0;
- (Class)valueClass;
- (id)properties;
- (void)setValueClass:(Class)a0;
- (void)setDescription:(id)a0;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end

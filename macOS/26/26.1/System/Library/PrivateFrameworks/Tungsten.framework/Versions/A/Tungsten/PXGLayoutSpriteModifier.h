@interface PXGLayoutSpriteModifier : NSObject <NSCopying> {
    id /* block */ _stateHandler;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStateHandler:(id /* block */)a0;
- (void)modifySpriteDataStore:(id)a0 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 forLayout:(id)a2;

@end

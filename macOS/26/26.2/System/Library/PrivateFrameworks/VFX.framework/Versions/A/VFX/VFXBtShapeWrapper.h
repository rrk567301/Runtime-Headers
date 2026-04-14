@interface VFXBtShapeWrapper : NSObject {
    struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *_collisionShape;
}

- (id)initWithShape:(struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)a0;
- (void)dealloc;
- (struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)btShape;

@end

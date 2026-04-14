@interface ObjCAdapterObject : NSObject {
    void *_objectPointer;
}

- (void)dealloc;
- (void)invalidate;
- (void *)objectPointer;
- (id)initWithObjectPointer:(void *)a0;

@end

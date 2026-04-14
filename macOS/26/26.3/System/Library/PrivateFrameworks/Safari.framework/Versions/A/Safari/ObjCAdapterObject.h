@interface ObjCAdapterObject : NSObject {
    void *_objectPointer;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithObjectPointer:(void *)a0;
- (void *)objectPointer;

@end

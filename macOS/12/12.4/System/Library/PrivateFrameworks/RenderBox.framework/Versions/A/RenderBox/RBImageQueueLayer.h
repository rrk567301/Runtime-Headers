@interface RBImageQueueLayer : CALayer {
    struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
}

+ (id)defaultValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

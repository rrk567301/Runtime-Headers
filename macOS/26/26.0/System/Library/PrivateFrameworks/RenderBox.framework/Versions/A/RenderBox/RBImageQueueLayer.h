@class RBImageQueueContents;

@interface RBImageQueueLayer : CALayer {
    struct objc_ptr<RBImageQueueContents *> { RBImageQueueContents *_p; } _queue;
}

+ (id)defaultValueForKey:(id)a0;

- (void)renderInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

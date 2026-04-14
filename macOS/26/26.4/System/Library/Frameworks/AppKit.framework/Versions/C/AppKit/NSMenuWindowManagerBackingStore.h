@interface NSMenuWindowManagerBackingStore : NSObject {
    struct CGContext { } *_ctx;
    struct CGImage { } *_img;
}

- (id)init;
- (void)dealloc;

@end

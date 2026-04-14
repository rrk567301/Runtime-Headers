@interface WKMenuTarget : NSObject {
    void *_menuProxy;
}

+ (id)sharedMenuTarget;

- (void)forwardContextMenuAction:(id)a0;
- (void *)menuProxy;
- (void)setMenuProxy:(void *)a0;

@end

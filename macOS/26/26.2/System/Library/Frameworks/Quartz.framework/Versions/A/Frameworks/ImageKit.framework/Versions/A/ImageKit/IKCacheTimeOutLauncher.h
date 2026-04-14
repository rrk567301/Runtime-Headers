@interface IKCacheTimeOutLauncher : NSObject {
    id _owner;
}

- (void)setOwner:(id)a0;
- (void)fire;

@end

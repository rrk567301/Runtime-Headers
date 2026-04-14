@interface TSUOnce : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didPerformOnce;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performBlockOnce:(id /* block */)a0;

@end

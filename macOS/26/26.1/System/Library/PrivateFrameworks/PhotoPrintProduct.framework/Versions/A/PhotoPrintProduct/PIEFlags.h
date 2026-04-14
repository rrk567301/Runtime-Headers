@class NSMutableSet;

@interface PIEFlags : NSObject {
    NSMutableSet *_flagKeys;
    NSMutableSet *_flags;
}

- (void)setFlag:(long long)a0;
- (void)dealloc;
- (id)init;
- (BOOL)isFlagSet:(long long)a0;
- (BOOL)unsetFlag:(long long)a0;

@end

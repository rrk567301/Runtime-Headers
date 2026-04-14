@interface TCMessagePlaceholderInfo : NSObject {
    id mKey;
    BOOL mInUse;
}

- (id)key;
- (BOOL)isInUse;
- (void).cxx_destruct;
- (void)setInUse:(BOOL)a0;
- (id)init;

@end

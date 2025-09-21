@interface TCMessagePlaceholderInfo : NSObject {
    id mKey;
    char mInUse;
}

- (id)init;
- (void).cxx_destruct;
- (id)key;
- (char)isInUse;
- (void)setInUse:(char)a0;

@end

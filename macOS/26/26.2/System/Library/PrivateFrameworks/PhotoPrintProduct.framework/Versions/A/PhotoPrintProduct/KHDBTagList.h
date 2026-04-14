@class KHDBLockedArray;

@interface KHDBTagList : NSObject {
    KHDBLockedArray *_tags;
}

- (id)description;
- (void)addTag:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addTag:(long long)a0 withType:(int)a1;

@end

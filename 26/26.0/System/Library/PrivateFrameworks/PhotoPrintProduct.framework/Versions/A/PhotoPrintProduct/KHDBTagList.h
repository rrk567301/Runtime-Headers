@class KHDBLockedArray;

@interface KHDBTagList : NSObject {
    KHDBLockedArray *_tags;
}

- (void)addTag:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)addTag:(long long)a0 withType:(int)a1;

@end

@class KHDBLockedArray;

@interface KHDBTagList : NSObject {
    KHDBLockedArray *_tags;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (void)addTag:(id)a0;
- (void)addTag:(long long)a0 withType:(int)a1;

@end

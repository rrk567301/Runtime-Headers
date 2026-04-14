@class KHDBLockedArray;

@interface KHDBTagList : NSObject {
    KHDBLockedArray *_tags;
}

- (void)addTag:(id)a0;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)addTag:(long long)a0 withType:(int)a1;

@end

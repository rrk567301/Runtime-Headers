@class KHDBLockedArray;

@interface KHDBTagList : NSObject {
    KHDBLockedArray *_tags;
}

- (void)addTag:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;
- (void)addTag:(long long)a0 withType:(int)a1;

@end

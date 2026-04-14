@class NSMutableDictionary;

@interface PIEListMap : NSObject {
    NSMutableDictionary *_listMap;
}

- (void)dealloc;
- (id)map;
- (id)init;
- (void)addObject:(id)a0 withKey:(id)a1;

@end

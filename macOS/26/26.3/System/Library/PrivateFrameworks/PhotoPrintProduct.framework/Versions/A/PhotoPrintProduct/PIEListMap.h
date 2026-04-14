@class NSMutableDictionary;

@interface PIEListMap : NSObject {
    NSMutableDictionary *_listMap;
}

- (id)map;
- (id)init;
- (void)dealloc;
- (void)addObject:(id)a0 withKey:(id)a1;

@end

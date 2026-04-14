@class NSMutableDictionary;

@interface PIEListMap : NSObject {
    NSMutableDictionary *_listMap;
}

- (id)init;
- (id)map;
- (void)dealloc;
- (void)addObject:(id)a0 withKey:(id)a1;

@end

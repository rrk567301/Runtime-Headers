@class NSMutableArray;

@interface CCDatabaseCommandCache : NSObject {
    NSMutableArray *_cache;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)commandForKey:(unsigned char)a0;
- (void)setCommand:(id)a0 forKey:(unsigned char)a1;

@end

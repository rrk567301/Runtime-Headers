@class NSMutableArray;

@interface HUComfortSoundsShuffler : NSObject {
    unsigned long long _index;
    NSMutableArray *_array;
}

+ (id)shufflerWithArray:(id)a0;

- (id)nextObject;
- (id)initWithArray:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)shuffle;

@end

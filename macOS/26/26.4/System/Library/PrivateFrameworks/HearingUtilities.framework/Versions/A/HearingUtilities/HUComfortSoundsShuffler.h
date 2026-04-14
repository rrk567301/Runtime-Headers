@class NSMutableArray;

@interface HUComfortSoundsShuffler : NSObject {
    unsigned long long _index;
    NSMutableArray *_array;
}

+ (id)shufflerWithArray:(id)a0;

- (id)initWithArray:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)nextObject;
- (void)shuffle;

@end

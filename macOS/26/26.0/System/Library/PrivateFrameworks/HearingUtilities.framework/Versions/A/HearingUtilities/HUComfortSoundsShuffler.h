@class NSMutableArray;

@interface HUComfortSoundsShuffler : NSObject {
    unsigned long long _index;
    NSMutableArray *_array;
}

+ (id)shufflerWithArray:(id)a0;

- (id)debugDescription;
- (id)nextObject;
- (id)description;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (void)shuffle;

@end

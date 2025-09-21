@class NSIndexSet, NSMutableIndexSet, NSMutableDictionary, NSNumber;

@interface TSCH3DActiveLabelsTypeBounds : NSObject {
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
}

@property (readonly, copy, nonatomic) NSNumber *activeType;
@property (readonly, retain, nonatomic) NSIndexSet *activeIndices;

- (id)init;
- (void).cxx_destruct;
- (id)active;
- (void)addBounds:(id)a0;
- (id)arrayAtIndex:(long long)a0;
- (char)hasAnyCachedBoundsAtIndices:(id)a0;
- (char)hasCachedBoundsAtIndex:(unsigned long long)a0;
- (char)resetIndex:(long long)a0;
- (char)setActiveType:(long long)a0;

@end

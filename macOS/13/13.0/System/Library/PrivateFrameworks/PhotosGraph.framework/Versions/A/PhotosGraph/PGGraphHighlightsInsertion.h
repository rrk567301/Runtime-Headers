@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;
@property (readonly, nonatomic) NSSet *highlights;

- (id)description;
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithHighlightUUIDs:(id)a0;
- (id)initWithHighlights:(id)a0;

@end

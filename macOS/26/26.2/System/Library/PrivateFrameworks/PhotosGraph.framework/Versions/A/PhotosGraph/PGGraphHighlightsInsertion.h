@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;
@property (readonly, nonatomic) NSSet *highlights;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHighlightUUIDs:(id)a0;
- (id)initWithHighlights:(id)a0;

@end

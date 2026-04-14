@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;
@property (readonly, nonatomic) NSSet *highlights;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithHighlightUUIDs:(id)a0;
- (id)initWithHighlights:(id)a0;

@end

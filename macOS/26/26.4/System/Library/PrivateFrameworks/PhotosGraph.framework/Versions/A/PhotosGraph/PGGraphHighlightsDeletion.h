@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithHighlightUUIDs:(id)a0;

@end

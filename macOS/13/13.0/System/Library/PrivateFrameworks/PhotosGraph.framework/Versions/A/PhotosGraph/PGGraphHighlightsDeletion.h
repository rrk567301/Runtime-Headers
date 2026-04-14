@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;

- (id)description;
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithHighlightUUIDs:(id)a0;

@end

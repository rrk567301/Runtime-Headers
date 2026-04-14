@class NSDictionary, NSArray;

@interface PFStoryConcreteTransitionTable : NSObject <PFStoryTransitionTable> {
    NSDictionary *_transitionsByColorGrade;
    NSArray *_defaultFrequencies;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)transitionsForColorGrade:(id)a0 songPace:(long long)a1;
- (id)initWithTransitionsByColorGrade:(id)a0 defaultFrequencies:(id)a1;

@end

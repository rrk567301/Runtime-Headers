@class NSArray;

@interface KHProductSpecificationSection : NSObject {
    unsigned long long _previousIndex;
    unsigned long long _firstIndex;
    unsigned long long _nextIndex;
    long long _pageNumber;
    unsigned long long _placement;
    NSArray *_linkedSections;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)firstIndex;
- (unsigned long long)placement;
- (long long)pageNumber;
- (unsigned long long)nextIndex;
- (id)pageName;
- (unsigned long long)previousIndex;
- (id)linkedSections;
- (void)setLinkedSections:(id)a0;
- (id)initWithPreviousIndex:(unsigned long long)a0 firstIndex:(unsigned long long)a1 nextIndex:(unsigned long long)a2 pageNumber:(long long)a3 placement:(unsigned long long)a4;

@end

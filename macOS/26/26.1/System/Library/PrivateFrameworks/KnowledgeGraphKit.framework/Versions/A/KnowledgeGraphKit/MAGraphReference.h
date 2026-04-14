@class MAGraph;
@protocol MAGraphProxy;

@interface MAGraphReference : NSObject {
    unsigned long long _hash;
}

@property (readonly, weak) id<MAGraphProxy> graph;
@property (readonly, weak) MAGraph *concreteGraph;

- (id)initWithGraph:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end

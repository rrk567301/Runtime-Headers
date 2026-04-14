@class PGGraphNamedLocationNode, NSString;

@interface PGTripLocationScore : NSObject {
    void /* unknown type, empty encoding */ momentNodes;
    void /* unknown type, empty encoding */ _score;
}

@property (nonatomic, readonly) PGGraphNamedLocationNode *locationNode;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocationNode:(id)a0 score:(double)a1 momentNodes:(id)a2;

@end

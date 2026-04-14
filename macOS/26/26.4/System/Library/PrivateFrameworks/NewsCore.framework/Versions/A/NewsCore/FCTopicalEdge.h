@class FCTopicalNode;

@interface FCTopicalEdge : NSObject {
    unsigned long long _containsAButNotB;
    unsigned long long _containsAAndB;
    unsigned long long _containsBButNotA;
}

@property (retain, nonatomic) FCTopicalNode *a;
@property (retain, nonatomic) FCTopicalNode *b;
@property (nonatomic) BOOL relatednessCalculated;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end

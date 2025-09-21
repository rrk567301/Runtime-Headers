@class NSMutableArray;

@interface PPTopicDissectorGuardedData : NSObject {
    char stop;
    NSMutableArray *topics;
    NSMutableArray *namedEntities;
    NSMutableArray *topicsExactMatchesInSourceText;
}

- (void).cxx_destruct;

@end

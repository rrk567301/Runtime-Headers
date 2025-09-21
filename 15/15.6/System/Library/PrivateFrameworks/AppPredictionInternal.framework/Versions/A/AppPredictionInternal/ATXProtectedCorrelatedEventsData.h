@class NSMutableArray;

@interface ATXProtectedCorrelatedEventsData : NSObject {
    NSMutableArray *correlatedEvents;
    unsigned long long typeBEventDataReturnIndex;
    char canUpdateReturnIndex;
    char executedCorrelation;
}

- (void).cxx_destruct;

@end

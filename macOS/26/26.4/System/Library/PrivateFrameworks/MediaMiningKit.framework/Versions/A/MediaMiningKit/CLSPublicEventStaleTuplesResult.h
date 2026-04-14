@class NSArray, NSDate;

@interface CLSPublicEventStaleTuplesResult : NSObject

@property (readonly, nonatomic) NSArray *staleTimeLocationTuples;
@property (readonly, nonatomic) NSDate *lastQueriedDate;

+ (id)emptyResult;

- (void).cxx_destruct;
- (id)initWithStaleLocationTuples:(id)a0 lastQueriedDate:(id)a1;

@end

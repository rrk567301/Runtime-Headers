@class NSData;

@interface CNFetchResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;

- (id)initWithValue:(id)a0 currentHistoryToken:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end

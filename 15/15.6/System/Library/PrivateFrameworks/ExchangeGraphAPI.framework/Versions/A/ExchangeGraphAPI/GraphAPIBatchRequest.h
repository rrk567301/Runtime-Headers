@class NSArray;

@interface GraphAPIBatchRequest : GraphAPIBaseRequest

@property (retain, nonatomic) NSArray *requests;
@property (nonatomic) char serial;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end

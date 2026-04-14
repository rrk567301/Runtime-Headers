@class NSArray;

@interface GraphAPIBatchRequest : GraphAPIBaseRequest

@property (retain, nonatomic) NSArray *requests;
@property (nonatomic) BOOL serial;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end

@class NSArray;

@interface GraphAPIBatchRequest : GraphAPIBaseRequest

@property (retain, nonatomic) NSArray *requests;
@property (nonatomic) BOOL serial;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end

@class NSArray;

@interface GraphAPIBatchRequest : GraphAPIBaseRequest

@property (retain, nonatomic) NSArray *requests;
@property (nonatomic) BOOL serial;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end

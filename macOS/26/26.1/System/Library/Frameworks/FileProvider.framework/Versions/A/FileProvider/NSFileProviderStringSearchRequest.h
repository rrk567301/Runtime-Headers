@class NSString;

@interface NSFileProviderStringSearchRequest : NSObject

@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) long long desiredNumberOfResults;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 desiredNumberOfResults:(long long)a1;

@end

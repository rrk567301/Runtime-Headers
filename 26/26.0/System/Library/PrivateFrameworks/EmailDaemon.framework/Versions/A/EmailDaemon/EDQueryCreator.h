@class NSString;

@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType;

- (id)queryWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithQueryType:(id)a0;
- (void).cxx_destruct;

@end

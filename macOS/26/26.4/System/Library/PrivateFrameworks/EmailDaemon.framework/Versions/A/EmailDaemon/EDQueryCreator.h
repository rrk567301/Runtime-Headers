@class NSString;

@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType;

- (void).cxx_destruct;
- (id)queryWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithQueryType:(id)a0;

@end

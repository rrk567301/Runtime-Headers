@class NSString, NSError;

@interface IMDMessageFilterQueryResponse : NSObject

@property (nonatomic) long long action;
@property (nonatomic) long long subAction;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end

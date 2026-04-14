@class NSString;

@interface SCMLTextSanitizerRequest : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL keepGoing;
@property (nonatomic) BOOL isPersonalized;
@property (nonatomic) BOOL isChildPresent;

- (id)init;
- (void).cxx_destruct;

@end

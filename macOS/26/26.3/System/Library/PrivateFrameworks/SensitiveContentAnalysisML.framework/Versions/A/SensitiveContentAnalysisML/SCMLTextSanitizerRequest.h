@class NSString, NSUUID;

@interface SCMLTextSanitizerRequest : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL keepGoing;
@property (nonatomic) BOOL isPersonalized;
@property (nonatomic) BOOL isChildPresent;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSUUID *userRequestID;

- (id)init;
- (void).cxx_destruct;

@end

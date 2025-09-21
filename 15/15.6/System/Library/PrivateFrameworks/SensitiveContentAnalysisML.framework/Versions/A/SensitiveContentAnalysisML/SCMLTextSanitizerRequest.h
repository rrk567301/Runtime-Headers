@class NSString, NSUUID;

@interface SCMLTextSanitizerRequest : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) char keepGoing;
@property (nonatomic) char isPersonalized;
@property (nonatomic) char isChildPresent;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSUUID *userRequestID;

- (id)init;
- (void).cxx_destruct;

@end

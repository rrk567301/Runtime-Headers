@class NSString;

@interface POWSTrustRelatesToType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSString *mustUnderstand;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end

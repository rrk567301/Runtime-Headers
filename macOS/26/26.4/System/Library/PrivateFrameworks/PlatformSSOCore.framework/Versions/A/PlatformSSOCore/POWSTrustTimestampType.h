@class NSString, NSDate;

@interface POWSTrustTimestampType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Id;
@property (retain, nonatomic) NSDate *Created;
@property (retain, nonatomic) NSDate *Expires;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end

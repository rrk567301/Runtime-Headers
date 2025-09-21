@class NSString;

@interface IRServiceLogPrefix : NSObject

@property (retain, nonatomic) NSString *prefix;

+ (id)queueSpecific;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

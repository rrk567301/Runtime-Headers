@class NSString;

@interface IRServiceLogPrefix : NSObject

@property (retain, nonatomic) NSString *prefix;

+ (id)queueSpecific;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString;

@interface IRServiceLogPrefix : NSObject

@property (retain, nonatomic) NSString *prefix;

+ (id)queueSpecific;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

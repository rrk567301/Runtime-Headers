@class NSString;

@interface IRServiceLogPrefix : NSObject

@property (retain, nonatomic) NSString *prefix;

+ (id)queueSpecific;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

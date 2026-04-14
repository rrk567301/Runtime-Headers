@class NSString;

@interface FCSelectorValue : NSObject

@property (readonly, copy, nonatomic) NSString *selector;
@property (readonly, copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithSelector:(id)a0 value:(id)a1;

@end

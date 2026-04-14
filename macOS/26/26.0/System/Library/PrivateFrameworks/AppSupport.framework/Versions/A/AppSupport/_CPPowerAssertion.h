@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (void)dealloc;
- (void)timedout;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;

@end

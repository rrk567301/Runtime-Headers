@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (void)timedout;
- (void)dealloc;

@end

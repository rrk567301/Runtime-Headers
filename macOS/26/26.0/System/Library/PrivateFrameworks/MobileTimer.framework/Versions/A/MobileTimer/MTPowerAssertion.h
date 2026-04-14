@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (readonly, nonatomic) NSString *name;

- (void)takeAssertion;
- (void)dealloc;
- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (id)initWithName:(id)a0;
- (void)releaseAssertion;
- (void).cxx_destruct;

@end

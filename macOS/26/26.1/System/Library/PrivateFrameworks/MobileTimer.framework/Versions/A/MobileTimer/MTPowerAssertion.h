@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)releaseAssertion;
- (void)takeAssertion;

@end

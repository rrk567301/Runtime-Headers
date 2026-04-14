@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (readonly, nonatomic) NSString *name;

- (void)takeAssertion;
- (void)releaseAssertion;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (void)dealloc;

@end

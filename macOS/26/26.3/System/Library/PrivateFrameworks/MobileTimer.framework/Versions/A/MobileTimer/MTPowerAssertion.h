@class NSString;

@interface MTPowerAssertion : NSObject

@property (readonly, nonatomic) double assertionTimeout;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 assertionTimeout:(double)a1;
- (void)takeAssertion;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseAssertion;

@end

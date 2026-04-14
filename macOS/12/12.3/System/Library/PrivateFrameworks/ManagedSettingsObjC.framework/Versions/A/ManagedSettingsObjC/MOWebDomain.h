@class NSString;

@interface MOWebDomain : NSObject

@property (readonly) NSString *domain;

+ (BOOL)compareDomain:(id)a0 withDomainPattern:(id)a1 outExactMatch:(BOOL *)a2;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end

@class NSString;

@interface MOWebDomain : NSObject <MOPersistable, NSCopying>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *domain;

+ (char)compareDomain:(id)a0 withDomainPattern:(id)a1 outExactMatch:(char *)a2;
+ (id)initializeWithPersistableValue:(id)a0;
+ (char)isValidPersistableRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end

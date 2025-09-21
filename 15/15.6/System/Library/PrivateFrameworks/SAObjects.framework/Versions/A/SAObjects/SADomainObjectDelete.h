@class SADomainObject, NSString;

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SADomainObject *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectDelete;
+ (id)domainObjectDeleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end

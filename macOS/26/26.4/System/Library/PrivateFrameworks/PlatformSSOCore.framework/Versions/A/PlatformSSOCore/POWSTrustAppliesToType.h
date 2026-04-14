@class POWSTrustEndpointReferenceType;

@interface POWSTrustAppliesToType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustEndpointReferenceType *EndpointReference;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end

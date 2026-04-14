@class NSDictionary, NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReachable) BOOL reachable;

- (id)attributeDescriptions;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 isReachable:(BOOL)a1;

@end

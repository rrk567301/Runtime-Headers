@class SARDNativeFlowContextUpdate, NSString;

@interface SARDResultCandidateSelected : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SARDNativeFlowContextUpdate *nativeFlowContextUpdate;
@property (copy, nonatomic) NSString *selectedResultCandidateId;
@property (nonatomic) char serverFallback;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultCandidateSelected;
+ (id)resultCandidateSelectedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end

@class NSString, SASiriPresentationClientState;

@interface SASetSiriPresentationClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SASiriPresentationClientState *clientState;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setSiriPresentationClientState;
+ (id)setSiriPresentationClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end

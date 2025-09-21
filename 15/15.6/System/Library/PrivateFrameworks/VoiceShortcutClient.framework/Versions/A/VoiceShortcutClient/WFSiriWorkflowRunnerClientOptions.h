@class NSArray, NSString;

@interface WFSiriWorkflowRunnerClientOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
@property (readonly, nonatomic) long long executionContext;
@property (readonly, copy, nonatomic) NSString *originatingDeviceIDSIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportMediaSystemIdentifier;
@property (readonly, nonatomic) char isOwnedByCurrentUser;
@property (nonatomic) long long currentDeviceIdiom;
@property (readonly, nonatomic) char disableSiriBehavior;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAirPlayRouteIDs:(id)a0 executionContext:(long long)a1 originatingDeviceIDSIdentifier:(id)a2 originatingDeviceRapportEffectiveIdentifier:(id)a3 originatingDeviceRapportMediaSystemIdentifier:(id)a4 isOwnedByCurrentUser:(char)a5;
- (id)initWithAirPlayRouteIDs:(id)a0 executionContext:(long long)a1 originatingDeviceIDSIdentifier:(id)a2 originatingDeviceRapportEffectiveIdentifier:(id)a3 originatingDeviceRapportMediaSystemIdentifier:(id)a4 isOwnedByCurrentUser:(char)a5 disableSiriBehavior:(char)a6;

@end

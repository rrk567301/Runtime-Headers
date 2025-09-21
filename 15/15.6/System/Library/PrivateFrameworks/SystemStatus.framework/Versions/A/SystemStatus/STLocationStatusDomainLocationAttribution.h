@class NSString, STActivityAttribution;

@interface STLocationStatusDomainLocationAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long locationState;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly, nonatomic) unsigned long long eligibleDisplayModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithLocationState:(unsigned long long)a0 activityAttribution:(id)a1 eligibleDisplayModes:(unsigned long long)a2;
- (id)initWithLocationState:(unsigned long long)a0 activityAttribution:(id)a1;

@end

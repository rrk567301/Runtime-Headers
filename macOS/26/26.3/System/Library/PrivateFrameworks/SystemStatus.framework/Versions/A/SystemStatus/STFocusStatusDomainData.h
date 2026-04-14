@class NSString;

@interface STFocusStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, copy, nonatomic) NSString *modeName;
@property (readonly, copy, nonatomic) NSString *modeSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end

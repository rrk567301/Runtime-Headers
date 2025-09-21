@class NSString;

@interface STBatteryStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long chargingState;
@property (readonly, nonatomic) unsigned long long percentCharge;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) char batterySaverModeActive;
@property (readonly, copy, nonatomic) NSString *chargingDescription;
@property (readonly, nonatomic) unsigned long long chargingDescriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;

@end

@class NSString;

@interface STWifiStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isWifiActive) char wifiActive;
@property (readonly, nonatomic) unsigned long long signalStrengthBars;
@property (readonly, nonatomic, getter=isAssociatedToIOSHotspot) char associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
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

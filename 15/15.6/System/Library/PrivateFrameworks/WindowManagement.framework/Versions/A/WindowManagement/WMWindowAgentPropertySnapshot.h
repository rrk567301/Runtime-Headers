@class NSString, _WMWindowTilingState;

@interface WMWindowAgentPropertySnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long validProperties;
@property (copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic, getter=isInUserWindowSet) char inUserWindowSet;
@property (nonatomic, getter=isMostlyOccluded) char mostlyOccluded;
@property (nonatomic, getter=isInAgentLiveResize) char inAgentLiveResize;
@property (nonatomic) char disableSnapshotRestoration;
@property (copy, nonatomic) _WMWindowTilingState *tilingState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowIdentifier:(id)a0;
- (id)propertiesByMergingProperties:(id)a0;

@end

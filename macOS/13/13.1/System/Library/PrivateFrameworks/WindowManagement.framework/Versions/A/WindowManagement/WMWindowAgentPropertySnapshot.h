@class NSString;

@interface WMWindowAgentPropertySnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long validProperties;
@property (copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic, getter=isInUserWindowSet) BOOL inUserWindowSet;
@property (nonatomic, getter=isMostlyOccluded) BOOL mostlyOccluded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindowIdentifier:(id)a0;
- (id)propertiesByMergingProperties:(id)a0;

@end

@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end

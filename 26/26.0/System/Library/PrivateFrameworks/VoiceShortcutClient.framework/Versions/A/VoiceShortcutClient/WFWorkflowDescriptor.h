@class NSString, WFColor;

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor <WFGlyphDrawableItem>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long color;
@property (readonly, nonatomic) WFColor *backgroundColor;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) double iconImageScale;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *searchAttributionAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setIconImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)externalURLForViewing;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 searchAttributionAppBundleIdentifier:(id)a5;

@end

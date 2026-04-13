@interface IFComponent : NSObject {
    struct IFComponent_Private { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } *_private;
}

+ (void)initialize;
+ (id)types;
+ (id)type;
+ (id)componentForNSXMLElementRepresentation:(id)a0;
+ (id)componentForFilesystemPath:(id)a0;
+ (id)componentForPatchingUsingNode:(id)a0 inPlan:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)identifier;
- (id)path;
- (id)initWithIdentifier:(id)a0;
- (void)setPath:(id)a0;
- (id)versionString;
- (id)attributeForKey:(id)a0;
- (id)actions;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)fullPath;
- (void)addAttributesFromDictionary:(id)a0;
- (void)addAction:(id)a0;
- (void)addActions:(id)a0;
- (id)subComponents;
- (void)addSubComponent:(id)a0;
- (BOOL)isEqualToComponent:(id)a0;
- (id)initWithFilesystemPath:(id)a0;
- (id)initWithNSXMLElement:(id)a0;
- (id)parentComponent;
- (id)ingoredAttributeTypes;
- (id)subComponentAtSubPath:(id)a0;
- (BOOL)updateWithNSXMLElementRepresentation:(id)a0;
- (void)setParentComponent:(id)a0;
- (id)componentLineage;
- (id)initWithIdentifier:(id)a0 andAttributes:(id)a1;

@end

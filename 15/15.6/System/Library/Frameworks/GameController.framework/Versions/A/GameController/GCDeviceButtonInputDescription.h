@class NSString, NSSet;

@interface GCDeviceButtonInputDescription : GCDeviceElementDescription {
    unsigned long long _attributes;
    unsigned long long _sourceAttributes;
    NSString *_name;
    NSSet *_additionalAliases;
    NSString *_nameLocalizationKey;
    NSString *_symbolName;
}

@property (readonly, getter=isDigital) char digital;
@property (readonly) char supportsTouch;
@property (readonly) NSString *sourceNameLocalizationKey;
@property (readonly) NSString *sourceSymbolName;
@property (readonly) float sourceTouchedThreshold;
@property (readonly) float sourcePressedThreshold;
@property (readonly) long long sourceExtendedEventFieldIndex;

+ (char)supportsSecureCoding;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (id)additionalAliases;
- (id)initWithName:(id)a0 additionalAliases:(id)a1 attributes:(unsigned long long)a2 nameLocalizationKey:(id)a3 symbolName:(id)a4 sourceAttributes:(unsigned long long)a5 sourceExtendedEventField:(long long)a6;
- (id)initWithName:(id)a0 additionalAliases:(id)a1 attributes:(unsigned long long)a2 nameLocalizationKey:(id)a3 symbolName:(id)a4 sourceAttributes:(unsigned long long)a5 sourceNameLocalizationKey:(id)a6 sourceSymbolName:(id)a7 sourceTouchedThreshold:(float)a8 sourcePressedThreshold:(float)a9 sourceExtendedEventField:(long long)a10;
- (char)isBoundToSystemGesture;
- (char)isMappableToSystemGestures;
- (char)isRemappable;
- (id)nameLocalizationKey;

@end

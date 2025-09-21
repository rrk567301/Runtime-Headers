@class NSString, NSDictionary;

@interface AVMediaPresentationSetting : NSObject <NSCopying> {
    NSString *_mediaCharacteristic;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *mediaCharacteristic;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)initWithFigAssetCustomMediaSelectionSchemeSetting:(id)a0;

@end

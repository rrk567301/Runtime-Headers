@class NSString, NSDictionary;

@interface AVMediaPresentationSetting : NSObject <NSCopying> {
    NSString *_mediaCharacteristic;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *mediaCharacteristic;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)initWithFigAssetCustomMediaSelectionSchemeSetting:(id)a0;

@end

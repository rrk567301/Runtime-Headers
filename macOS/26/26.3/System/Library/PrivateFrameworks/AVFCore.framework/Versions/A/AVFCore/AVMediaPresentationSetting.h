@class NSString, NSDictionary;

@interface AVMediaPresentationSetting : NSObject <NSCopying> {
    NSString *_mediaCharacteristic;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *mediaCharacteristic;

- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)initWithFigAssetCustomMediaSelectionSchemeSetting:(id)a0;

@end

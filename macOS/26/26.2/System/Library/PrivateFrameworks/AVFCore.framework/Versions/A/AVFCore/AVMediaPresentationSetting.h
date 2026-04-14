@class NSString, NSDictionary;

@interface AVMediaPresentationSetting : NSObject <NSCopying> {
    NSString *_mediaCharacteristic;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *mediaCharacteristic;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)initWithFigAssetCustomMediaSelectionSchemeSetting:(id)a0;

@end

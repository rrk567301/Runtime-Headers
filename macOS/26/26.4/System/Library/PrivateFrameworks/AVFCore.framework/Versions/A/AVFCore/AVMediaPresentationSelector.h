@class NSString, NSArray, NSDictionary;

@interface AVMediaPresentationSelector : NSObject <NSCopying> {
    NSString *_identifier;
    NSArray *_mediaPresentationSettings;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *identifier;
@property (readonly) NSArray *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)_settingsSatisfiableByOptions:(id)a0;
- (id)_settingsSatisfiableByOptions:(id)a0 satisfiableLanguages:(id)a1;
- (id)initWithFigAssetCustomMediaSelectionSchemeSelector:(id)a0;

@end

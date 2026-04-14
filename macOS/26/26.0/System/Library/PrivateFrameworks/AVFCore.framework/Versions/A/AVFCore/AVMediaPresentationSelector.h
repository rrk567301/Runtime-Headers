@class NSString, NSArray, NSDictionary;

@interface AVMediaPresentationSelector : NSObject <NSCopying> {
    NSString *_identifier;
    NSArray *_mediaPresentationSettings;
    NSDictionary *_displayNames;
}

@property (readonly) NSString *identifier;
@property (readonly) NSArray *settings;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)displayNameForLocaleIdentifier:(id)a0;
- (id)_settingsSatisfiableByOptions:(id)a0;
- (id)_settingsSatisfiableByOptions:(id)a0 satisfiableLanguages:(id)a1;
- (id)initWithFigAssetCustomMediaSelectionSchemeSelector:(id)a0;

@end

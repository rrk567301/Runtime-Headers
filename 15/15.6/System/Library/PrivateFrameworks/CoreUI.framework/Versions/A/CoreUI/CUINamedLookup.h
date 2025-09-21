@class NSString, CUIRenditionKey, CUIThemeRendition;

@interface CUINamedLookup : NSObject <NSLocking> {
    NSString *_signature;
    unsigned int _distilledInVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _odContent : 1;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CUIRenditionKey *key;
@property (nonatomic) unsigned long long storageRef;
@property (readonly, nonatomic) CUIThemeRendition *_rendition;
@property (readonly, nonatomic) CUIRenditionKey *renditionKey;
@property (readonly, nonatomic) NSString *keySignature;
@property (readonly, nonatomic) char _cacheRenditionProperties;
@property (readonly, nonatomic) unsigned int _distilledInVersion;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) long long sizeClassHorizontal;
@property (readonly, nonatomic) long long sizeClassVertical;
@property (readonly, nonatomic) long long memoryClass;
@property (readonly, nonatomic) long long graphicsClass;
@property (readonly, nonatomic) long long appearanceIdentifier;
@property (readonly, nonatomic) NSString *renditionName;
@property (readonly, nonatomic) char representsOnDemandContent;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) long long displayGamut;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) long long localization;
@property (readonly, nonatomic) NSString *appearance;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)lock;
- (void)unlock;
- (id)_renditionForSpecificKey:(id)a0;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (char)isTintable;
- (void)setRepresentsOnDemandContent:(char)a0;

@end

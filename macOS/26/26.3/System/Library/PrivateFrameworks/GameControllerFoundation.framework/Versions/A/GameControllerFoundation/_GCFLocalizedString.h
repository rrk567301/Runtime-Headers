@class NSString, NSBundle, NSLocale;

@interface _GCFLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSBundle *_sourceBundle;
    NSString *_localizationTable;
    NSLocale *_localeOverride;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (id)bundle;
- (id)key;
- (Class)classForCoder;
- (id)table;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)_realizedString;
- (id)initWithKey:(id)a0 sourceBundle:(id)a1 table:(id)a2 locale:(id)a3;

@end

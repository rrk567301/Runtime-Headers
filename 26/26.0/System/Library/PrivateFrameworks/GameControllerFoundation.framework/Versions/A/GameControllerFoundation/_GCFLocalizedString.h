@class NSString, NSBundle, NSLocale;

@interface _GCFLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSBundle *_sourceBundle;
    NSString *_localizationTable;
    NSLocale *_localeOverride;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)bundle;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)key;
- (id)initWithCoder:(id)a0;
- (id)table;
- (id)_realizedString;
- (id)initWithKey:(id)a0 sourceBundle:(id)a1 table:(id)a2 locale:(id)a3;

@end

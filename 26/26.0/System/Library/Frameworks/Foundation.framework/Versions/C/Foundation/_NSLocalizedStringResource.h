@class NSString, NSURL, NSLocale, _NSLocalizedStringResourceSwiftWrapper;

@interface _NSLocalizedStringResource : NSObject <NSCopying, NSSecureCoding> {
    _NSLocalizedStringResourceSwiftWrapper *_resource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSString *defaultValue;
@property (readonly, copy) NSString *table;
@property (readonly, copy) NSURL *bundleURL;
@property (copy) NSLocale *locale;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resource;
- (void)encodeWithCoder:(id)a0;
- (id)localize;
- (id)description;
- (id)initWithResource:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 locale:(id)a3 bundleURL:(id)a4;
- (id)initWithKey:(id)a0 table:(id)a1 locale:(id)a2 bundleURL:(id)a3;
- (id)localizeParsingMarkdown;
- (id)localizeWithOptions:(id)a0;

@end

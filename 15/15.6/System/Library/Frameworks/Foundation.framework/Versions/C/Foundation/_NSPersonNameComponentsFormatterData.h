@class NPNameParser, NSLocale;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {
    NPNameParser *_nameParser;
}

@property (class, readonly) char supportsSecureCoding;

@property long long style;
@property char phonetic;
@property char forceFamilyNameFirst;
@property char forceGivenNameFirst;
@property char ignoresFallbacks;
@property (copy) NSLocale *locale;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

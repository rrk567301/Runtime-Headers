@class NSString, NSArray, NSURL;

@interface INDeferredLocalizedString : NSString

@property (readonly, copy) NSString *_formatKey;
@property (readonly, copy) NSString *_table;
@property (readonly, copy) NSArray *_arguments;
@property (readonly, copy) NSString *_bundleIdentifier;
@property (readonly, copy) NSURL *_bundleURL;
@property (readonly, copy) NSString *_cachedLocalization;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)_intents_encodeForProto;
- (id)initWithDeferredFormat:(id)a0 fromTable:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (id)initWithDeferredFormat:(id)a0 fromTable:(id)a1 bundleIdentifier:(id)a2 bundleURL:(id)a3 arguments:(id)a4;
- (id)localizeForLanguage:(id)a0;

@end

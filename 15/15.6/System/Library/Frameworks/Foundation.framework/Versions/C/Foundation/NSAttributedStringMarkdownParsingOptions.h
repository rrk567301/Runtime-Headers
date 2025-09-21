@class NSString;

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>

@property char allowsExtendedAttributes;
@property long long interpretedSyntax;
@property long long failurePolicy;
@property (copy) NSString *languageCode;
@property char appliesSourcePositionAttributes;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end

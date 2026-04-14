@class NSString;

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>

@property BOOL allowsExtendedAttributes;
@property long long interpretedSyntax;
@property long long failurePolicy;
@property (copy) NSString *languageCode;
@property BOOL appliesSourcePositionAttributes;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end

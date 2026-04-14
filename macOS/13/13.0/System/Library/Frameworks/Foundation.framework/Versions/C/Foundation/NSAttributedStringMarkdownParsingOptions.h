@class NSString;

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>

@property BOOL allowsExtendedAttributes;
@property long long interpretedSyntax;
@property long long failurePolicy;
@property (copy) NSString *languageCode;
@property BOOL appliesSourcePositionAttributes;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

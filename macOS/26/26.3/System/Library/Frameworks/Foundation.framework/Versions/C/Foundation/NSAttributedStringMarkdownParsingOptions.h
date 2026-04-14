@class NSString;

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>

@property BOOL allowsExtendedAttributes;
@property long long interpretedSyntax;
@property long long failurePolicy;
@property (copy) NSString *languageCode;
@property BOOL appliesSourcePositionAttributes;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

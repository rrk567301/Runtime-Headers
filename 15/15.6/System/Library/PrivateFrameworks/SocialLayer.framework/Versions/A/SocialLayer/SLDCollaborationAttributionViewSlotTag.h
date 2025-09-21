@class NSString, NSArray, NSNumber, SLDImageSymbolConfiguration;

@interface SLDCollaborationAttributionViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isPlaceholder;
@property (retain, nonatomic) SLDImageSymbolConfiguration *placeholderGlyphConfiguration;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (nonatomic) long long variant;
@property (retain, nonatomic) NSArray *collaboratorDisplayNames;
@property (retain, nonatomic) NSArray *conversationDrawingMetadata;

+ (id)_personOtherThanPerson:(id)a0 inArray:(id)a1;
+ (id)conversationDrawingMetadataForAttributions:(id)a0;
+ (id)displayNamesForPersons:(id)a0;
+ (id)placeholderTagForMaxWidth:(double)a0 placeholderGlyphConfiguration:(id)a1;
+ (id)recipientsForAttribution:(id)a0;
+ (id)tagForTitle:(id)a0 attributions:(id)a1 placeholderGlyphConfiguration:(id)a2 maxWidth:(double)a3 variant:(long long)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)initWithTitle:(id)a0 attributions:(id)a1 placeholderGlyphConfiguration:(id)a2 maxWidth:(double)a3 variant:(long long)a4 isPlaceholder:(char)a5;

@end

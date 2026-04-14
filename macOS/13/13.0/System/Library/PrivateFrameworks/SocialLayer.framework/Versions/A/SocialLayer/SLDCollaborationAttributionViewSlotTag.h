@class NSString, NSNumber, NSArray;

@interface SLDCollaborationAttributionViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPlaceholder;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (nonatomic) long long variant;
@property (retain, nonatomic) NSArray *collaboratorDisplayNames;
@property (retain, nonatomic) NSArray *conversationDrawingMetadata;

+ (id)placeholderTagForMaxWidth:(double)a0;
+ (id)tagForTitle:(id)a0 attributions:(id)a1 maxWidth:(double)a2 variant:(long long)a3;
+ (id)conversationDrawingMetadataForAttributions:(id)a0;
+ (id)_personOtherThanPerson:(id)a0 inArray:(id)a1;
+ (id)displayNamesForPersons:(id)a0;
+ (id)recipientsForAttribution:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)resolvedStyleForStyle:(id)a0;
- (id)initWithTitle:(id)a0 attributions:(id)a1 maxWidth:(double)a2 variant:(long long)a3 isPlaceholder:(BOOL)a4;

@end

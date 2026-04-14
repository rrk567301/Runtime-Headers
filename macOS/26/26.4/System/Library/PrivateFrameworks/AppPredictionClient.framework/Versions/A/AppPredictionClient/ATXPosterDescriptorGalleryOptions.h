@class NSArray, NSString, ATXComplication, NSDictionary;

@interface ATXPosterDescriptorGalleryOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isOffloaded;
@property (copy, nonatomic) NSArray *modularComplications;
@property (copy, nonatomic) NSArray *modularLandscapeComplications;
@property (copy, nonatomic) ATXComplication *inlineComplication;
@property (nonatomic) BOOL allowsSystemSuggestedComplications;
@property (nonatomic) BOOL allowsSystemSuggestedComplicationsInLandscape;
@property (nonatomic) long long featuredConfidenceLevel;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSString *spokenNameLocalizationKey;
@property (copy, nonatomic) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, getter=isHero) BOOL hero;
@property (nonatomic) BOOL shouldShowAsShuffleStack;
@property (nonatomic) long long photoSubtype;
@property (nonatomic) long long focus;
@property (nonatomic, getter=isOnlyEligibleForMadeForFocusSection) BOOL onlyEligibleForMadeForFocusSection;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)galleryOptionsFromDictionaryRepresentation:(id)a0 error:(id *)a1;

- (void)setPreferredInlineComplication:(id)a0;
- (void)setBlankTemplate:(BOOL)a0;
- (BOOL)isBlankTemplate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPreferredComplications:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)preferredInlineComplication;
- (id)description;
- (BOOL)isEqualToATXPosterDescriptorGalleryOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)preferredComplications;

@end

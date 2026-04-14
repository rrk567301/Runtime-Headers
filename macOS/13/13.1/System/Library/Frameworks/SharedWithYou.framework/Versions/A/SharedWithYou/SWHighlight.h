@class NSURL, SLHighlight;
@protocol NSSecureCoding, NSCopying;

@interface SWHighlight : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setSLHighlight:) SLHighlight *slHighlight;
@property (readonly, copy, nonatomic) id<NSSecureCoding, NSCopying> identifier;
@property (readonly, copy, nonatomic) NSURL *URL;

+ (id)highlightsForSLHighlights:(id)a0;
+ (id)requiredSpotlightAttributeKeys;
+ (unsigned char)highlightContentTypeForType:(unsigned char)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timestamp;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)stringIdentifier;
- (id)attributions;
- (id)resourceUTI;
- (id)replyContextMenu;
- (id)hideContextMenu;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)initWithSLHighlight:(id)a0;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forType:(unsigned char)a1 error:(id *)a2;
- (BOOL)isLocalResource;
- (BOOL)isSyndicatableMedia;
- (id)livePhotoComplementURL;

@end

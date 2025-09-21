@class NSString;

@interface IMTapback : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) IMTapback *visibleTapbackCounterpart;
@property (readonly, nonatomic) IMTapback *removedTapbackCounterpart;
@property (readonly, nonatomic) IMTapback *counterpart;
@property (readonly, nonatomic, getter=isRemoved) char removed;
@property (readonly, nonatomic, getter=isSendable) char sendable;
@property (retain, nonatomic) NSString *languageIdentifier;

+ (char)isValidAssociatedMessageType:(long long)a0;
+ (id)tapbackWithAssociatedMessageType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)_attributedAssociatedMessageSummaryFromMessageSummaryInfo:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1 isCommSafetySensitiveProvider:(id /* block */)a2 adaptiveImageGlyphProvider:(id /* block */)a3 effectString:(id)a4;
- (id)_convertDatabaseFormatAssociatedMessageSummaryToDisplayFormat:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1 isCommSafetySensitiveProvider:(id /* block */)a2 adaptiveImageGlyphProvider:(id /* block */)a3;
- (char)_isAssociatedMessageContentTypeTextInMessageSummaryInfo:(id)a0;
- (char)_isAttachmentOnlyMessageText:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1;
- (id)_plainStringAssociatedMessageSummaryFromMessageSummaryInfo:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1;
- (id)_plainStringReactionFromAttributedReactionString:(id)a0;
- (id)actionStringFormatWithAdaptiveImageGlyphAvailable:(char)a0;
- (id)adaptiveImageGlyphForPreviewStringWithAdaptiveImageGlyphProvider:(id /* block */)a0;
- (id)backwardCompatibilityStringFormatForMessageSummaryInfo:(id)a0;
- (id)backwardCompatibilityStringWithMessageSummaryInfo:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1 isCommSafetySensitiveProvider:(id /* block */)a2;
- (id)contentTypeStringForMessageSummaryInfo:(id)a0;
- (id)emojiReactionForPreviewString;
- (id)initWithAssociatedMessageType:(long long)a0;
- (id)previewAttributedStringWithMessageSummaryInfo:(id)a0 isAdaptiveImageGlyphProvider:(id /* block */)a1 isCommSafetySensitiveProvider:(id /* block */)a2 adaptiveImageGlyphProvider:(id /* block */)a3 senderDisplayName:(id)a4 isFromMe:(char)a5 effectString:(id)a6;
- (id)previewStringFormatForMessageSummaryInfo:(id)a0 adaptiveImageGlyphAvailable:(char)a1 isFromMe:(char)a2;
- (id)reactionStringWithAdaptiveImageGlyph:(id)a0 isCommSafetySensitiveProvider:(id /* block */)a1;
- (char)shouldQuoteContentString:(id)a0;

@end

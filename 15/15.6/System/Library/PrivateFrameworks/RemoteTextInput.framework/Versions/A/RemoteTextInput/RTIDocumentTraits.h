@class CAFenceHandle, NSString, NSArray, RTIAssistantItem, TIInputContextHistory, NSData, NSDictionary, RTITextInputKeyboardActionButtonConfiguration, TITextInputTraits, NSObject, NSIndexSet, RTIInputViewInfo;
@protocol NSSecureCoding, NSCopying;

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding> {
    union { unsigned int integerValue; struct { unsigned char shouldLoadAutofillSignUp : 1; unsigned char supportsImagePaste : 1; unsigned char devicePasscodeEntry : 1; unsigned char disableInputBars : 1; unsigned char disablePrediction : 1; unsigned char hidePrediction : 1; unsigned char disableAutomaticKeyboardUI : 1; unsigned char shouldReverseLayoutDirection : 1; unsigned char explicitAutoFillMode : 1; unsigned char singleLineDocument : 1; unsigned char supportsAdaptiveImageGlyph : 1; } fields; } _textInputTraitsMask;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int processId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *localizedAppName;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSObject<NSCopying, NSSecureCoding> *responderId;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long entityID;
@property (nonatomic) unsigned int contextID;
@property (nonatomic) unsigned long long layerID;
@property (copy, nonatomic) NSString *sceneExclusivityIdentifier;
@property (nonatomic) unsigned long long delegateConformanceType;
@property (nonatomic) char disableAutomaticKeyboardUI;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) RTIInputViewInfo *inputViewInfo;
@property (retain, nonatomic) RTIInputViewInfo *assistantViewInfo;
@property (retain, nonatomic) RTIAssistantItem *assistantItem;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (copy, nonatomic) NSString *textInputContextIdentifier;
@property (retain, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } validTextRange;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic) unsigned long long autofillSubMode;
@property (retain, nonatomic) NSDictionary *autofillContext;
@property (nonatomic) char shouldLoadAutofillSignUp;
@property (copy, nonatomic) NSString *passwordRules;
@property (copy, nonatomic) NSString *recipientId;
@property (copy, nonatomic) NSString *responseContext;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory;
@property (copy, nonatomic) NSArray *enabledSupplementalLexiconIdentifiers;
@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (nonatomic) char supportsImagePaste;
@property (nonatomic) char supportsEmojiImageTextAttachments;
@property (nonatomic) char supportsAdaptiveImageGlyph;
@property (nonatomic) char devicePasscodeEntry;
@property (nonatomic) char disableInputBars;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) char disablePrediction;
@property (nonatomic) char hidePrediction;
@property (retain, nonatomic) CAFenceHandle *fenceHandle;
@property (retain, nonatomic) NSData *textInputModeData;
@property (copy, nonatomic) NSArray *additionalLocaleIdentifiers;
@property (nonatomic) char shouldReverseLayoutDirection;
@property (nonatomic, getter=isSingleLineDocument) char singleLineDocument;
@property (nonatomic, getter=isExplicitAutoFillMode) char explicitAutoFillMode;
@property (retain, nonatomic) RTITextInputKeyboardActionButtonConfiguration *keyboardActionButtonConfiguration;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyContextualPropertiesFromDocumentTraits:(id)a0;

@end

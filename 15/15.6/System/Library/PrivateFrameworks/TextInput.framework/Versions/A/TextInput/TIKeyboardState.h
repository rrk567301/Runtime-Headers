@class TIInputContextHistory, TIAttributedDocumentState, TIKeyboardLayout, TITextInputTraits, NSDictionary, TIKeyboardCandidate, TIKeyboardLayoutState, TIDocumentState, TIKeyboardSecureCandidateRenderTraits, NSString, NSArray, BKSHIDEventAuthenticationMessage, NSUUID;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { long long integerValue; struct { unsigned char userSelectedCurrentCandidate : 1; unsigned char shouldSkipCandidateSelection : 1; unsigned char suppressingCandidateSelection : 1; unsigned char needsCandidateMetadata : 1; unsigned char keyboardEventsLagging : 1; unsigned char hardwareKeyboardMode : 1; unsigned char splitKeyboardMode : 1; unsigned char floatingKeyboardMode : 1; unsigned char wordLearningEnabled : 1; unsigned char autocorrectionEnabled : 1; unsigned char shortcutConversionEnabled : 1; unsigned char candidateSelectionPredictionEnabled : 1; unsigned char autocapitalizationEnabled : 1; unsigned char canSendCurrentLocation : 1; unsigned char isScreenLocked : 1; unsigned char longPredictionListEnabled : 1; unsigned char needAutofill : 1; unsigned char needOneTimeCodeAutofill : 1; unsigned char landscapeOrientation : 1; unsigned char omitEmojiCandidates : 1; unsigned char emojiSearchMode : 1; unsigned char emojiPopoverMode : 1; unsigned char canSuggestSupplementalItemsForCurrentSelection : 1; unsigned char inlineCompletionEnabled : 1; unsigned char imageSuggestionEnabled : 1; unsigned char needCellularAutofill : 1; } fields; } _mask;
    union { long long integerValue; struct { unsigned char displayed : 1; unsigned char autoDisplayMode : 1; } fields; } _autocorrectionListUIState;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long supplementalLexiconIdentifier;
@property (nonatomic) char canSuggestSupplementalItemsForCurrentSelection;
@property (retain, nonatomic) NSUUID *documentIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSArray *auxiliaryInputModeLanguages;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (nonatomic) int shiftState;
@property (copy, nonatomic) TIKeyboardLayoutState *layoutState;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TIAttributedDocumentState *attributedDocumentState;
@property (copy, nonatomic) TIKeyboardSecureCandidateRenderTraits *secureCandidateRenderTraits;
@property (copy, nonatomic) BKSHIDEventAuthenticationMessage *eventAuthenticationMessage;
@property (copy, nonatomic) NSString *inputForMarkedText;
@property (copy, nonatomic) NSString *searchStringForMarkedText;
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) char userSelectedCurrentCandidate;
@property (nonatomic) char shouldSkipCandidateSelection;
@property (nonatomic) char suppressingCandidateSelection;
@property (nonatomic) char needsCandidateMetadata;
@property (nonatomic) char keyboardEventsLagging;
@property (nonatomic) char hardwareKeyboardMode;
@property (nonatomic) char splitKeyboardMode;
@property (nonatomic) char floatingKeyboardMode;
@property (nonatomic) char landscapeOrientation;
@property (nonatomic) char omitEmojiCandidates;
@property (nonatomic) char emojiSearchMode;
@property (nonatomic) char emojiPopoverMode;
@property (nonatomic) char wordLearningEnabled;
@property (nonatomic) char autocorrectionEnabled;
@property (nonatomic) char shortcutConversionEnabled;
@property (nonatomic) char candidateSelectionPredictionEnabled;
@property (nonatomic) char autocapitalizationEnabled;
@property (nonatomic) char inlineCompletionEnabled;
@property (nonatomic) char imageSuggestionEnabled;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) char secureTextEntry;
@property (nonatomic) char autocorrectionListUIDisplayed;
@property (nonatomic) char autocorrectionListUIAutoDisplayMode;
@property (nonatomic) char canSendCurrentLocation;
@property (nonatomic) char isScreenLocked;
@property (nonatomic) char longPredictionListEnabled;
@property (nonatomic) char needAutofill;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic) unsigned long long autofillSubMode;
@property (retain, nonatomic) NSDictionary *autofillContext;
@property (nonatomic) char needOneTimeCodeAutofill;
@property (readonly, nonatomic) char needContactAutofill;
@property (nonatomic) char needCellularAutofill;
@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (readonly, nonatomic) char shouldOutputFullwidthSpace;
@property (copy, nonatomic) NSArray *statisticChanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_createTextInputTraitsIfNecessary;

@end

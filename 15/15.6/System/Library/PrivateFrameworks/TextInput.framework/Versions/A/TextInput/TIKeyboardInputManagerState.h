@class TIKeyboardBehaviors, NSString, TIKeyboardCandidate, TIKeyEventMap, NSNumber, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    union { long long integerValue; struct { unsigned char canHandleKeyHitTest : 1; unsigned char ignoresDeadKeys : 1; unsigned char shouldExtendPriorWord : 1; unsigned char suppliesCompletions : 1; unsigned char supportsNumberKeySelection : 1; unsigned char supportsSetPhraseBoundary : 1; unsigned char suppressCompletionsForFieldEditor : 1; unsigned char usesAutoDeleteWord : 1; unsigned char usesCandidateSelection : 1; unsigned char commitsAcceptedCandidate : 1; unsigned char newInputAcceptsUserSelectedCandidate : 1; unsigned char nextInputWouldStartSentence : 1; unsigned char inputStringIsExemptFromChecker : 1; unsigned char suppressPlaceholderCandidate : 1; unsigned char usesAutocorrectionLists : 1; unsigned char autoquoteType : 2; unsigned char usesContinuousPath : 1; unsigned char usesContinuousPathProgressiveCandidates : 1; unsigned char usesPunctuationKeysForRowNavigation : 1; unsigned char insertsSpaceAfterPredictiveInput : 1; unsigned char shouldFixupIncompleteRomaji : 1; unsigned char acceptAutocorrectionCommitsInline : 1; unsigned char usesLiveConversion : 1; unsigned char delayedCandidateList : 1; unsigned char ignoreContinuousPathRequirements : 1; unsigned char supportsReversionUI : 1; } fields; } _mask;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *learningFlagsForLastAcceptedCandidate;
@property (nonatomic) char canHandleKeyHitTest;
@property (nonatomic) char ignoresDeadKeys;
@property (nonatomic) char shouldExtendPriorWord;
@property (nonatomic) char supportsReversionUI;
@property (nonatomic) char suppliesCompletions;
@property (nonatomic) char supportsSetPhraseBoundary;
@property (nonatomic) char suppressCompletionsForFieldEditor;
@property (nonatomic) char usesAutoDeleteWord;
@property (nonatomic) char usesCandidateSelection;
@property (nonatomic) char usesAutocorrectionLists;
@property (nonatomic) char commitsAcceptedCandidate;
@property (nonatomic) char newInputAcceptsUserSelectedCandidate;
@property (nonatomic) unsigned long long autoquoteType;
@property (nonatomic) char usesContinuousPath;
@property (nonatomic) char usesContinuousPathProgressiveCandidates;
@property (nonatomic) char ignoreContinuousPathRequirements;
@property (nonatomic) char insertsSpaceAfterPredictiveInput;
@property (nonatomic) char shouldFixupIncompleteRomaji;
@property (nonatomic) char acceptAutocorrectionCommitsInline;
@property (nonatomic) char usesLiveConversion;
@property (nonatomic) char delayedCandidateList;
@property (copy, nonatomic) NSString *replacementForDoubleSpace;
@property (copy, nonatomic) NSString *wordSeparator;
@property (nonatomic) unsigned long long initialCandidateBatchCount;
@property (retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors;
@property (nonatomic) char shouldAddModifierSymbolsToWordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *wordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *supplementalLexiconWordExtraCharacters;
@property (copy, nonatomic) TICharacterSetDescription *shortcutCompletions;
@property (copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;
@property (copy, nonatomic) TICharacterSetDescription *inputsToReject;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace;
@property (copy, nonatomic) NSString *inputString;
@property (nonatomic) char hasSupplementalPrefix;
@property (nonatomic) unsigned long long inputIndex;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic) char nextInputWouldStartSentence;
@property (nonatomic) char inputStringIsExemptFromChecker;
@property (nonatomic) char suppressPlaceholderCandidate;
@property (nonatomic) char supportsNumberKeySelection;
@property (nonatomic) char usesPunctuationKeysForRowNavigation;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString;
@property (nonatomic) unsigned long long learningFlagsMaskForLastAcceptedCandidate;
@property (copy, nonatomic) NSString *shadowTyping;
@property (copy, nonatomic) NSString *searchStringForMarkedText;
@property (retain, nonatomic) TIKeyEventMap *keyEventMap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)stringEndsWord:(id)a0;
- (char)acceptInputString:(id)a0;
- (char)inputStringAcceptsCurrentCandidateIfSelected:(id)a0;
- (char)shouldDeleteAutospaceBeforeTerminator:(id)a0;
- (char)shouldSuppressAutocorrectionWithTerminator:(id)a0;

@end

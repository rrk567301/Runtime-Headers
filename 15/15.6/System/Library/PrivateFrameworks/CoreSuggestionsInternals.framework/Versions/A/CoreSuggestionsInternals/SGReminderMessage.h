@class SGDuplicateKey, NSArray, SGMessage, SGPipelineEntity;

@interface SGReminderMessage : SGExtractionDocument

@property (retain, nonatomic) SGMessage *message;
@property (retain, nonatomic) SGPipelineEntity *entity;
@property (retain, nonatomic) NSArray *plainTextDetectedData;
@property (retain, nonatomic) SGDuplicateKey *extractedReminderDuplicateKey;

+ (char)shouldAddTitlePrefixForContent:(id)a0;
+ (char)tokensMatchedInContent:(id)a0 content:(id)a1;
+ (id)confirmationOptionalTokens;
+ (id)detectedTitleInModelOutput:(id)a0 enrichedTaggedCharacterRanges:(id)a1 textContent:(id)a2 language:(id)a3;
+ (char)enrichedTaggedCharacterRangesContainsProfanity:(id)a0;
+ (id)excludeList;
+ (char)excludedContent:(id)a0;
+ (id)frenchPrependForEnrichedTaggedCharacterRanges:(id)a0 actionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (char)isConfirmationOptionalForContent:(id)a0;
+ (id)posTaggerNouns;
+ (id)regexFromJoinedArray:(id)a0 wordBoundary:(id)a1;
+ (id)searchTokensForReminderTitle:(id)a0;
+ (id)titlePrefixTokens;
+ (id)titlePrependForActionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1 language:(id)a2 content:(id)a3;
+ (id)triggerOptionalTokens;
+ (char)validActionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1;
+ (char)validModelOutput:(id)a0 error:(id *)a1;
+ (char)validObjectCoreIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1;

- (void).cxx_destruct;
- (char)hasTrigger;
- (id)dueLocation;
- (id)_labelTokenIndexesForOutputName:(id)a0 label:(id)a1;
- (id)detectedDueDateComponents;
- (id)detectedTitleForLanguage:(id)a0;
- (id)dueDateDataDetectorMatches;
- (id)initWithMessage:(id)a0 entity:(id)a1 enrichedTaggedCharacterRanges:(id)a2 modelOutput:(id)a3;
- (id)initWithMessage:(id)a0 plainTextDetectedData:(id)a1 enrichedTaggedCharacterRanges:(id)a2 modelOutput:(id)a3;
- (char)isConfirmation;
- (char)isProposal;
- (char)isRejection;
- (char)isTriggerOptional;

@end

@class NSString, IASGenmojiQueryInfo, NSMutableSet, NSDate, NSMutableArray, IASGenmojiPeoplePickerModel;

@interface IASGenmojiAnalyzerCache : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned long long entryPoint;
@property (retain, nonatomic) NSDate *creationSheetEntryTime;
@property (retain, nonatomic) NSDate *initialImageModelStartTime;
@property (nonatomic) double initialImageTotalModelRuntime;
@property (retain, nonatomic) NSDate *allImagesModelStartTime;
@property (nonatomic) double allImagesTotalModelRuntime;
@property (nonatomic) char imageGenerationStartedSeen;
@property (retain, nonatomic) NSDate *ambiguousPersonFoundTime;
@property (copy, nonatomic) NSString *promptLanguage;
@property (nonatomic) unsigned long long numPrompts;
@property (copy, nonatomic) NSString *previousPrompt;
@property (retain, nonatomic) IASGenmojiQueryInfo *currentQueryInfo;
@property (retain, nonatomic) NSMutableSet *featureModel;
@property (nonatomic) unsigned long long numImagesGenerated;
@property (nonatomic) unsigned long long currentBlobIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } seenBlobRange;
@property (nonatomic) unsigned long long numImagesSaved;
@property (nonatomic) char usedCaption;
@property (nonatomic) char usedCopy;
@property (nonatomic) char usedShare;
@property (nonatomic) unsigned long long numImagesInserted;
@property (nonatomic) char isLastPrompt;
@property (retain, nonatomic) NSMutableArray *failureReasonArray;
@property (nonatomic) unsigned long long numInitialImageRetries;
@property (nonatomic) unsigned long long numTotalRetries;
@property (nonatomic) unsigned long long personalizationType;
@property (retain, nonatomic) IASGenmojiPeoplePickerModel *peoplePicker;
@property (nonatomic) char isActivelyGeneratingInitialImage;
@property (nonatomic) char isLowConfidenceFromCharacterPicker;

- (id)init;
- (void).cxx_destruct;
- (void)addFailureReasonToCache:(id)a0 errorDomain:(id)a1 errorCode:(id)a2;
- (id)failureReasonSet;

@end

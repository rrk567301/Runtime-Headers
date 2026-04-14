@class NSString, IASGenmojiQueryInfo, NSMutableSet, NSDate, IASGenmojiPeoplePickerModel;

@interface IASGenmojiAnalyzerCache : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned long long entryPoint;
@property (retain, nonatomic) NSDate *initialImageModelStartTime;
@property (nonatomic) double initialImageTotalModelRuntime;
@property (retain, nonatomic) NSDate *allImagesModelStartTime;
@property (nonatomic) double allImagesTotalModelRuntime;
@property (nonatomic) BOOL imageGenerationStartedSeen;
@property (retain, nonatomic) NSDate *ambiguousPersonFoundTime;
@property (nonatomic) unsigned long long numPrompts;
@property (copy, nonatomic) NSString *previousPrompt;
@property (retain, nonatomic) IASGenmojiQueryInfo *currentQueryInfo;
@property (retain, nonatomic) NSMutableSet *featureModel;
@property (nonatomic) unsigned long long numImagesGenerated;
@property (nonatomic) unsigned long long currentBlobIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } seenBlobRange;
@property (nonatomic) unsigned long long numImagesSaved;
@property (nonatomic) BOOL usedCaption;
@property (nonatomic) BOOL usedCopy;
@property (nonatomic) BOOL usedShare;
@property (nonatomic) unsigned long long numImagesInserted;
@property (nonatomic) BOOL isLastPrompt;
@property (retain, nonatomic) NSMutableSet *failureReasons;
@property (nonatomic) unsigned long long numInitialImageRetries;
@property (nonatomic) unsigned long long numTotalRetries;
@property (nonatomic) unsigned long long personalizationType;
@property (retain, nonatomic) IASGenmojiPeoplePickerModel *peoplePicker;
@property (nonatomic) BOOL isLowConfidenceFromCharacterPicker;

- (id)init;
- (void).cxx_destruct;

@end

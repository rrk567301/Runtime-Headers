@class NSString, ICNote, ICTTMergeableStringSelection, NSDate, NSDictionary, NSData;

@interface ICTextViewScrollState : NSObject

@property (retain, nonatomic) ICTTMergeableStringSelection *topLeftStringSelection;
@property (nonatomic) double topLeftTextAttachmentScrollHeightOffsetRatio;
@property (weak, nonatomic) ICNote *note;
@property (copy, nonatomic) NSString *noteIdentifier;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromArchive) char fromArchive;
@property (nonatomic) char loadingFromDictionaryFailed;
@property (nonatomic) char isApplying;
@property (nonatomic) unsigned long long topLeftCharIndexAtCapture;
@property (readonly, nonatomic) unsigned long long topLeftTextCharacterIndex;
@property (readonly, nonatomic) char captureIsWithinTimeThreshold;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) double timeIntervalSinceCapture;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)scrollStateForAttachment:(id)a0 inNote:(id)a1;
+ (id)scrollStateForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inNote:(id)a1;
+ (id)scrollStateForTextView:(id)a0;
+ (void)setupDateFormatter;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)applyToTextView:(id)a0;
- (id)initWithData:(id)a0 managedObjectContext:(id)a1;
- (id)initWithDictionary:(id)a0 note:(id)a1;

@end

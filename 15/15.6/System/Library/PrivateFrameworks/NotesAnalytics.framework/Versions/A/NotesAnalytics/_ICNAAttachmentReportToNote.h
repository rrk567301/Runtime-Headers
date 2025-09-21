@class NSMutableDictionary;

@interface _ICNAAttachmentReportToNote : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAttachmentByUTI;
@property (nonatomic) unsigned long long countOfAttachments;
@property (nonatomic) unsigned long long countOfAudioAttachments;
@property (nonatomic) unsigned long long countOfAudioAttachmentsRecordedInNotes;
@property (nonatomic) unsigned long long countOfAudioAttachmentsWithAppendedAudio;
@property (nonatomic) unsigned long long countOfInlineDrawingV1PencilStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV1FingerStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2PencilStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2FingerStrokes;
@property (nonatomic) unsigned long long countOfFullscreenDrawingStrokes;
@property (nonatomic) char hasAudioTranscript;
@property (nonatomic) char hasAudioSummary;
@property (nonatomic) char hasDeepLink;
@property (nonatomic) char hasSafariHighlight;
@property (nonatomic) char hasImages;
@property (nonatomic) char hasMathUsage;

- (id)init;
- (void).cxx_destruct;
- (void)reportAttachmentTypeUTI:(id)a0;
- (void)reportDrawingWithSnapshotData:(id)a0;

@end

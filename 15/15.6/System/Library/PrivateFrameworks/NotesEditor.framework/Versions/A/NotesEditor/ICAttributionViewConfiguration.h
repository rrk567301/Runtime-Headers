@class NSDate, NSString, NSAttributedString, NSArray, NSOrderedSet, ICTTTextEdit, ICAttributionViewConfigurationSharedState, NSMutableArray, NSImage, NSObject;
@protocol OS_dispatch_queue;

@interface ICAttributionViewConfiguration : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *loadDataQueue;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } associatedTextFrame;
@property (copy, nonatomic) NSAttributedString *attribution;
@property (retain, nonatomic) id attributionTextStorage;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDate *explicitTimestamp;
@property (copy, nonatomic) NSAttributedString *formattedTimestamp;
@property (retain, nonatomic) id formattedTimestampTextStorage;
@property (copy, nonatomic) NSImage *statusImage;
@property (retain, nonatomic) NSMutableArray *highlightConfigurations;
@property (readonly, nonatomic) NSString *attributionUserID;
@property (readonly, nonatomic) NSOrderedSet *userIDs;
@property (readonly, nonatomic) NSArray *unreadUserIDs;
@property (nonatomic) char forceVisible;
@property (nonatomic, getter=isDataLoaded) char dataLoaded;
@property (readonly, nonatomic) ICAttributionViewConfigurationSharedState *sharedState;
@property (readonly, nonatomic) NSArray *editGroups;
@property (readonly, nonatomic) ICTTTextEdit *textEdit;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } trimmedRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attributionFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } formattedTimestampFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } disclosureImageFrame;
@property (readonly, copy, nonatomic) NSImage *disclosureImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFormattedTimestampFrame;
@property (nonatomic) double appliedHorizontalAdjustmentRatio;
@property (nonatomic) double preferredHighlightValue;
@property (nonatomic) char forcesAttributionHidden;
@property (readonly, nonatomic) char isAttributionHidden;
@property (nonatomic) char forcesTimestampHidden;
@property (readonly, nonatomic) char isTimestampHidden;
@property (readonly, nonatomic) char isDisclosureImageHidden;
@property (readonly, nonatomic) char isStatusImageHidden;
@property (nonatomic, getter=isPreview) char preview;
@property (nonatomic, getter=isFocused) char focused;
@property (nonatomic, getter=isBlurred) char blurred;
@property (readonly, nonatomic) NSArray *childConfigurations;
@property (weak, nonatomic) ICAttributionViewConfiguration *parentConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0;
- (void)updateTimestamp;
- (void)addEditGroup:(id)a0;
- (void)commonInitWithSharedState:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)drawStatusImageInContext:(struct CGContext { } *)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)editGroupForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)hasValidRange;
- (id)initWithSharedState:(id)a0 editGroups:(id)a1 parentConfiguration:(id)a2;
- (id)initWithSharedState:(id)a0 textEdit:(id)a1 parentConfiguration:(id)a2;
- (char)isEqualToAttributionViewConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTrimmedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)synchronouslyLoadData;
- (void)updateAttribution;
- (void)updateAttributionTextStorage;
- (void)updateChildConfigurations;
- (void)updateFormattedTimestampTextStorage;
- (void)updateFrames;
- (void)updateHighlightAlpha;
- (void)updateHighlightFrames;
- (void)updateStatusImage;
- (void)updateUnreadUserIDs;

@end

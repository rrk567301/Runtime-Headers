@class NSString;

@interface NotesEditor.PaperDocumentEngagementData : NSObject <ICPaperDocumentEngagementData> {
    void /* function */ attachmentIdentifier;
    void /* unknown type, empty encoding */ startDisplayMode;
    void /* unknown type, empty encoding */ endDisplayMode;
    void /* unknown type, empty encoding */ unknownState;
    void /* unknown type, empty encoding */ smallState;
    void /* unknown type, empty encoding */ mediumState;
    void /* unknown type, empty encoding */ largeState;
}

@property (nonatomic, readonly) NSString *attachmentIdentifier;
@property (nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasSmallStateUsage;
@property (nonatomic) BOOL hasMediumStateUsage;
@property (nonatomic) BOOL hasLargeStateUsage;
@property (nonatomic) BOOL hasFullscreenStateUsage;
@property (nonatomic) long long startPageCount;
@property (nonatomic) long long endPageCount;
@property (nonatomic) BOOL hasGestures;
@property (nonatomic) BOOL hasScroll;
@property (nonatomic) BOOL hasPagination;
@property (nonatomic) BOOL hasPinchZoom;
@property (nonatomic) BOOL hasPinchToExpandState;
@property (nonatomic) BOOL hasCollabView;
@property (nonatomic) BOOL hasCollabEdit;
@property (nonatomic, readonly) long long startState;
@property (nonatomic, readonly) long long endState;

- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end

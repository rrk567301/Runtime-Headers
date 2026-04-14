@interface NotesEditor.TranscriptViewController : NSViewController <NSTextContentManagerDelegate, NSTextViewDelegate, NSGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ paragraphRanges;
    void /* unknown type, empty encoding */ previousParagraphRange;
    void /* unknown type, empty encoding */ previousSpeaker;
    void /* unknown type, empty encoding */ queryEntered;
    void /* unknown type, empty encoding */ audioController;
    void /* unknown type, empty encoding */ playbackTime;
    void /* unknown type, empty encoding */ representableAdapter;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isAutoScrollingForSegmentChange;
    void /* unknown type, empty encoding */ currentlyDragging;
    void /* unknown type, empty encoding */ currentlyScrolling;
    void /* unknown type, empty encoding */ lastScrolledDate;
    void /* unknown type, empty encoding */ previousContentOffset;
    void /* unknown type, empty encoding */ activeSegment;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)audioDidStopWithNotification:(id)a0;
- (void)audioPlaybackTimeDidChangeWithNotification:(id)a0;

@end

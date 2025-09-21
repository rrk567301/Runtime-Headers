@class KHFrame, NSArray, KHTreatment, KHCellFrame, KHProject, NSDate;

@interface KHCalendarCell : NSObject <KHCellFrameJournalDataProvider> {
    double _x;
    double _y;
    double _width;
    double _height;
    KHTreatment *_treatment;
    KHFrame *_dateFrame;
    KHCellFrame *_contentFrame;
    KHFrame *_parentFrame;
    KHCellFrame *_photoFrame;
    NSDate *_date;
    NSArray *_journalEntries;
    long long _index;
}

@property (readonly, nonatomic) KHProject *project;

+ (void)moveCaption:(id)a0 ToDate:(id)a1 forCell:(id)a2;
+ (void)moveCaption:(id)a0 withCell:(id)a1 withPosition:(unsigned long long)a2;
+ (void)resetTextAttributesOnCell:(id)a0 parentFrame:(id)a1;

- (id)frames;
- (id)treatment;
- (void)setIndex:(long long)a0;
- (long long)index;
- (void)setWidth:(double)a0;
- (void)setDate:(id)a0;
- (double)y;
- (id)date;
- (void)dealloc;
- (void)setContentFrame:(id)a0;
- (void)setY:(double)a0;
- (double)width;
- (id)contentFrame;
- (void)setHeight:(double)a0;
- (void)setX:(double)a0;
- (double)x;
- (void)setTreatment:(id)a0;
- (double)height;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGPoint { double x0; double x1; })basePoint;
- (id)parentFrame;
- (id)dateFrame;
- (void)setDateFrame:(id)a0;
- (void)setParentFrame:(id)a0;
- (BOOL)drawsPhotoFrame;
- (void)_updateContentFrameVisibility;
- (id)accessoryPhotoEntry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseRectForScale:(double)a0;
- (BOOL)canHaveCaption;
- (unsigned long long)captionLocationForEntry:(id)a0;
- (id)cellAbove;
- (id)cellBelow;
- (id)cellFrameForJournalEntry:(id)a0;
- (id)cellLeft;
- (id)cellRight;
- (id)defaultPhotoEntryForType:(unsigned long long)a0;
- (id)defaultTextEntry;
- (BOOL)drawsContentFrame;
- (BOOL)drawsDateFrame;
- (void)fillCellBackgroundInContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fillCellContentInContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fillCellForegroundInContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (BOOL)isNextPreviousMonthCell;
- (id)journalDataForFrame:(id)a0;
- (id)journalEntries;
- (id)photoEntry;
- (id)photoFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForScale:(double)a0 inset:(struct { double x0; double x1; BOOL x2; BOOL x3; })a1;
- (void)refreshJournalEntries;
- (void)setJournalEntries:(id)a0;
- (void)setPhotoFrame:(id)a0;

@end

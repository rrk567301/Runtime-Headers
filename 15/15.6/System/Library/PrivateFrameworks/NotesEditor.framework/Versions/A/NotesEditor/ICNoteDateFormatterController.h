@class ICNote, NSDateFormatter, NSDate;
@protocol ICNoteDateFormatterControllerDelegate;

@interface ICNoteDateFormatterController : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *shortDateFormatter;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long currentSortType;
@property (nonatomic) char didManuallyChangeDateType;
@property (nonatomic) char showAlternateDateView;
@property (readonly, nonatomic) char shouldShowDateModified;
@property (nonatomic) char shouldShowSharedNoteTitle;
@property (nonatomic) char iconHidden;
@property (weak, nonatomic) id<ICNoteDateFormatterControllerDelegate> delegate;
@property (weak, nonatomic) ICNote *note;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateDate;
- (void)setUp;
- (id)dateStringForDate:(id)a0 dateFormatter:(id)a1;
- (void)noteDecryptedStatusDidChange:(id)a0;
- (void)timeFormatChanged:(id)a0;
- (void)toggleVisibleDateType;
- (void)updateDateLabelAccessibilityHint;
- (void)updateLockIcon;

@end

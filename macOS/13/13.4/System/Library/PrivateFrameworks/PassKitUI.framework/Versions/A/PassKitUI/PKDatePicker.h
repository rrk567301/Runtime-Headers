@class NSDate, NSPopUpButton;
@protocol PKDatePickerDelegate;

@interface PKDatePicker : NSView

@property (retain) NSPopUpButton *dayPopUpButton;
@property (retain) NSPopUpButton *monthPopUpButton;
@property (retain) NSPopUpButton *yearPopUpButton;
@property (readonly, nonatomic) BOOL showsDay;
@property (readonly, nonatomic) BOOL showsMonth;
@property (readonly, nonatomic) BOOL showsYear;
@property (nonatomic) BOOL isExpirationDate;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) id<PKDatePickerDelegate> delegate;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popUpDidUpdate:(id)a0;
- (void)_configurePopUpButton:(id)a0 placeHolder:(id)a1;
- (id)_textFieldWithPlaceHolder:(id)a0;
- (void)reconfigureToShowDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2;

@end

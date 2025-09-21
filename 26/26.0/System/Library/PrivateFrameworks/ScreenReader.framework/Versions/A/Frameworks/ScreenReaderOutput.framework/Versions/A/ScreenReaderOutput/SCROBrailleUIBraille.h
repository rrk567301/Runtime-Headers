@class NSString;

@interface SCROBrailleUIBraille : NSObject

@property (readonly, nonatomic) NSString *braille;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } focus;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isMultiLine;
@property (readonly, nonatomic) BOOL shouldTruncateAtPanBoundary;

+ (id)lineWithBraille:(id)a0;
+ (id)lineWithBraille:(id)a0 shouldTruncateAtPanBoundary:(BOOL)a1;
+ (id)lineWithEditableBraille:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)lineWithEditablePlaceholder:(id)a0;
+ (id)multiLineBraille:(id)a0;
+ (id)multiLineBraille:(id)a0 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)multiLineEditableBraille:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;
- (id)initWithBraille:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 isEditable:(BOOL)a3 isMultiLine:(BOOL)a4 shouldTruncateAtPanBoundary:(BOOL)a5;
- (id)initWithBraille:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isEditable:(BOOL)a2 isMultiLine:(BOOL)a3;

@end

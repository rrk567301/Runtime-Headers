@class NSString;

@interface AVTimecodeTextField : NSTextField <NSTextViewDelegate>

@property BOOL isEditing;
@property (nonatomic) double preferredMinLayoutWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)beginEditing;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (BOOL)textShouldEndEditing:(id)a0;
- (void)doneEditing;

@end

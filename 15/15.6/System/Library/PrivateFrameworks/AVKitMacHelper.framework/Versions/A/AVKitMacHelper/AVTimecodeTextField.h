@class NSString;

@interface AVTimecodeTextField : NSTextField <NSTextViewDelegate>

@property char isEditing;
@property (nonatomic) double preferredMinLayoutWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)beginEditing;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)textShouldEndEditing:(id)a0;
- (void)doneEditing;

@end

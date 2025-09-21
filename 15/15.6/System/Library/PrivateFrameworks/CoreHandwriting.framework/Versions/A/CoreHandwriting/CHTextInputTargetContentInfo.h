@class NSString, CHTextInputTarget, NSIndexSet;

@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying> {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_characterRectsInReferenceSubstring;
}

@property (readonly, nonatomic) CHTextInputTarget *textInputTarget;
@property (readonly, nonatomic) long long textContentLength;
@property (readonly, copy, nonatomic) NSString *referenceSubstring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } referenceSubstringRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } strokeCoveredTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedTextRange;
@property (readonly, nonatomic) char isCursorStrong;
@property (readonly, nonatomic) char containsCommittedStrokes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } activePreviewRange;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (readonly, nonatomic) int autoCorrectionMode;
@property (readonly, nonatomic) int baseWritingDirection;
@property (readonly, nonatomic) char isSingleLine;
@property (readonly, nonatomic) char supportsAutoLineBreaks;
@property (readonly, nonatomic) long long lastCharacterLevelPosition;
@property (readonly, copy, nonatomic) NSIndexSet *protectedCharacterIndexes;

- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)absoluteLocationFromRelativeLocation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectForAbsoluteCharacterIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectForComposedCharacterAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectForRelativeCharacterIndex:(long long)a0;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 block:(id /* block */)a1;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 reverse:(char)a1 block:(id /* block */)a2;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 contentType:(int)a8 lastCharacterLevelPosition:(long long)a9;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 lastCharacterLevelPosition:(long long)a8;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 isCursorStrong:(char)a7 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 contentType:(int)a9 autoCapitalizationMode:(int)a10 autoCorrectionMode:(int)a11 isSingleLine:(char)a12 lastCharacterLevelPosition:(long long)a13;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 isCursorStrong:(char)a7 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 contentType:(int)a9 isSingleLine:(char)a10 lastCharacterLevelPosition:(long long)a11;
- (id)referenceSubstringInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })referenceSubstringRangeOfComposedCharacterAtIndex:(long long)a0;
- (long long)relativeLocationFromAbsoluteLocation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionCharacterRects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visualCharacterRectForCharacterIndex:(long long)a0;

@end

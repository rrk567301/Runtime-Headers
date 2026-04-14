@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    BOOL mTextWrapped;
    BOOL mHorizontalAlignOverridden;
    BOOL mVerticalAlignOverridden;
    BOOL mIndentOverridden;
    BOOL mTextWrappedOveridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alignmentInfo;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHorizontalAlignment:(int)a0;
- (void)setVerticalAlignment:(int)a0;
- (int)horizontalAlignment;
- (int)verticalAlignment;
- (int)indent;
- (void)setIndent:(int)a0;
- (int)textRotation;
- (BOOL)isEqualToAlignmentInfo:(id)a0;
- (BOOL)isHorizontalAlignOverridden;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isIndentOverridden;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isTextWrapped;
- (void)setTextWrapped:(BOOL)a0;
- (void)setTextRotation:(int)a0;
- (void)setDoNotModify:(BOOL)a0;

@end

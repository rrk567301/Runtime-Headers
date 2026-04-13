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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)a0;
- (void)setHorizontalAlignment:(int)a0;
- (int)horizontalAlignment;
- (void)setIndent:(int)a0;
- (int)indent;
- (int)textRotation;
- (void)setTextWrapped:(BOOL)a0;
- (void)setTextRotation:(int)a0;
- (BOOL)isHorizontalAlignOverridden;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isTextWrapped;
- (BOOL)isIndentOverridden;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isEqualToAlignmentInfo:(id)a0;
- (void)setDoNotModify:(BOOL)a0;

@end

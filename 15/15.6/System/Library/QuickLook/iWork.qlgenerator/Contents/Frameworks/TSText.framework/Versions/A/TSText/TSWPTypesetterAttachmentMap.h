@class TSWPAttachment, TSDLayout;

@interface TSWPTypesetterAttachmentMap : NSObject

@property (weak, nonatomic) TSWPAttachment *attachment;
@property (retain, nonatomic) TSDLayout *layout;
@property (nonatomic) char layoutNeedsRevalidation;
@property (readonly, nonatomic) struct __CTLine { } *lineRef;
@property (nonatomic) char isWithinVerticalText;

+ (id)mapWithAttachment:(id)a0 layout:(id)a1 pageNumber:(unsigned long long)a2 pageCount:(unsigned long long)a3 footnoteMarkProvider:(id)a4 styleProvider:(id)a5 colorOverride:(id)a6 textScalePercent:(unsigned long long)a7 targetSupportsPageNumbers:(BOOL)a8;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (char)hasLayout;

@end

@class TSWPPadding, TSTCellStyle;

@interface TSTCellStyleHandle : NSObject <NSCopying>

@property (readonly, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, nonatomic) char isVariation;
@property (readonly, nonatomic) char cellWraps;
@property (readonly, nonatomic) char overridesPadding;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) int verticalAlignment;

+ (id)handleForCellStyle:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCellStyle:(id)a0;

@end

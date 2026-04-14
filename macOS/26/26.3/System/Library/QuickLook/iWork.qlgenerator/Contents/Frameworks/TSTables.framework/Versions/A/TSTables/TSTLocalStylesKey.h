@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTLocalStylesKey : NSObject <NSCopying>

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

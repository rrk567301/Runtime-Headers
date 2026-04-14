@class TSUCustomFormat;

@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>

@property (readonly, nonatomic) TSUCustomFormat *customFormat;

+ (id)stemMatchObjectWithCustomFormat:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithCustomFormat:(id)a0;

@end

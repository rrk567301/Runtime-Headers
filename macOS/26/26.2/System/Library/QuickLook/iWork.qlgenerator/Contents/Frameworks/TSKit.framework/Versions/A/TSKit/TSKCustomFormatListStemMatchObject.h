@class TSUCustomFormat;

@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>

@property (readonly, nonatomic) TSUCustomFormat *customFormat;

+ (id)stemMatchObjectWithCustomFormat:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initObjectWithCustomFormat:(id)a0;

@end

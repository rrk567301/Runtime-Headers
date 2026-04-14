@class TSUCustomFormat;

@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>

@property (readonly, nonatomic) TSUCustomFormat *customFormat;

+ (id)stemMatchObjectWithCustomFormat:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(id)a0;

@end

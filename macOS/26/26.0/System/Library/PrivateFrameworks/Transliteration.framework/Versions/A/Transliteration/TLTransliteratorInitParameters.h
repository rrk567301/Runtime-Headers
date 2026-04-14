@class NSURL, NSLocale;

@interface TLTransliteratorInitParameters : NSObject <NSMutableCopying, NSCopying>

@property (copy) NSURL *modelURL;
@property (readonly, copy) NSLocale *locale;
@property (nonatomic) BOOL useLanguageModel;
@property (nonatomic) BOOL useSeq2SeqModel;

- (id)initWithLocale:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

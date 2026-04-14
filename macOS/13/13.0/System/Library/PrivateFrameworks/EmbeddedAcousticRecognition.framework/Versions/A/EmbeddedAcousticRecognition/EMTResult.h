@class NSArray, NSString, NSLocale;

@interface EMTResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 tokens:(id)a1 confidence:(float)a2 lowConfidence:(BOOL)a3 metaInfo:(id)a4;

@end

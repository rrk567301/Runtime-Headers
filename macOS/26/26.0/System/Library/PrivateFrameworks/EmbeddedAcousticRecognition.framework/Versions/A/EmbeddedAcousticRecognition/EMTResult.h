@class NSArray, NSString, NSLocale;

@interface EMTResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;
@property (readonly, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *alternativeSelectionSpans;
@property (readonly, nonatomic) NSArray *stableSegments;
@property (readonly, nonatomic) NSArray *sourceSpans;
@property (readonly, nonatomic) NSArray *targetProjections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 tokens:(id)a1 confidence:(float)a2 lowConfidence:(BOOL)a3 metaInfo:(id)a4 romanization:(id)a5 alternativeSelectionSpans:(id)a6 sourceSpans:(id)a7 targetProjections:(id)a8 stableSegments:(id)a9;

@end

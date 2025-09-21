@class GDEntitySimilarityRequest;

@interface GDEntitySimilarityResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDEntitySimilarityRequest *request;
@property (readonly, nonatomic) double similarityScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 similarityScore:(double)a1;

@end

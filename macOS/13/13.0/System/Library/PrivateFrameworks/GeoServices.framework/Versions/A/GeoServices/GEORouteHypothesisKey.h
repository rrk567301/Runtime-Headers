@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEORouteHypothesisRequest *request;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRouteHypothesisRequest:(id)a0;
- (BOOL)_isEqual:(id)a0;

@end

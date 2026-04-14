@class VNRequest;
@protocol NSObject, NSCopying;

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) id<NSObject, NSCopying> observationsCacheKey;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)a0 observationsCacheKey:(id)a1;

@end

@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) NSError *error;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)a0 error:(id)a1;

@end

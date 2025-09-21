@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject

@property (readonly, nonatomic) NSSet *entries;
@property (retain, nonatomic) PDSRequestInfo *requestInfo;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToRequest:(id)a0;
- (id)initWithEntries:(id)a0 requestInfo:(id)a1;

@end

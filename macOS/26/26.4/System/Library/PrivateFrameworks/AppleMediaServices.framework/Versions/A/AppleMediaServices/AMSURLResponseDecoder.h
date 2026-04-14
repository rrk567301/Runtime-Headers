@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding>

@property (copy, nonatomic) NSIndexSet *allowedStatusCodes;
@property (copy, nonatomic) NSSet *allowedContentTypes;

- (void).cxx_destruct;
- (id)init;
- (id)resultFromResult:(id)a0 error:(id *)a1;

@end

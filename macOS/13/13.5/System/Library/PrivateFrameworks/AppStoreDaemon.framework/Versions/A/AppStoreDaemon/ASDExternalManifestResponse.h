@class NSError, NSArray;

@interface ASDExternalManifestResponse : ASDRequestResponse

@property (copy) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property BOOL success;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResults:(id)a0;

@end

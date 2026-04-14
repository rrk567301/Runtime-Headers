@class NSArray;

@interface ASDExternalManifestResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *results;

- (id)initWithError:(id)a0;
- (id)init;
- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

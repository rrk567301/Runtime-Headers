@class NSArray;

@interface ASDExternalManifestResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *results;

- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDMigrationRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end

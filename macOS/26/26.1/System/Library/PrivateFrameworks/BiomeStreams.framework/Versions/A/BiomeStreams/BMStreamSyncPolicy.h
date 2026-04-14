@class NSString;

@interface BMStreamSyncPolicy : BMResourceSyncPolicy

@property (readonly, nonatomic) NSString *legacyDescriptor;

+ (id)syncableStreams;
+ (id)syncableStreamConfigurations;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLegacyDescriptor:(id)a0 platformPolicies:(id)a1;
- (id)initWithPolicyDictionary:(id)a0 syncUUID:(id)a1 legacySyncID:(id)a2 eventClass:(Class)a3;

@end

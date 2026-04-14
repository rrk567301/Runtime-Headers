@interface FSFFeatureStoreService : NSObject

@property (class, nonatomic) BOOL overrideSupportedUserCheck;

+ (void)insertCodingWithInteractionId:(id)a0 item:(id)a1;
+ (void)insertPBCodableWithInteractionId:(id)a0 item:(id)a1;
+ (id)interactionIdForInjection;
+ (id)retrieveCodingWithInteractionId:(id)a0 klass:(Class)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;

@end

@class NSString, _TtC16NetworkExtension44NEURLFilterControlProviderHostExportedObject, NSData, NSURL, NSError;

@interface NEURLFilterControlProviderHost : NEExtensionBaseProviderHost

@property (nonatomic, retain) _TtC16NetworkExtension44NEURLFilterControlProviderHostExportedObject *exportedObject;

- (id)init;
- (void).cxx_destruct;
- (void)fetchPrefilterDataWithTag:(NSString *)a0 completion:(void (^)(NSData *, NSURL *, NSString *, NSString *, unsigned int, unsigned int, unsigned int, NSError *))a1;
- (void)initialize:(id)a0;
- (void)startWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)stopWithReason:(long long)a0 completion:(void (^)(BOOL, NSError *))a1;

@end

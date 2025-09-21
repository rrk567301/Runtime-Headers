@class NSNumber, NSString, CKContainerImplementation, NSOperationQueue, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface CKCodeServiceImplementation : NSObject

@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;
@property (readonly, copy, nonatomic) NSNumber *boxedDatabaseScope;

- (id)description;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)CKStatusReportArray;
- (void)_addPreparedOperation:(id)a0;
- (void)addOperation:(id)a0 wrappingCodeService:(id)a1 convenienceConfiguration:(id)a2;
- (id)initInternalWithContainerImplementation:(id)a0 serviceName:(id)a1 boxedDatabaseScope:(id)a2 serviceInstanceURL:(id)a3;

@end

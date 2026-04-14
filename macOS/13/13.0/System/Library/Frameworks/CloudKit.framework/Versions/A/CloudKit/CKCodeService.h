@class CKCodeServiceImplementation, NSString, NSURL, CKContainer;

@interface CKCodeService : NSObject

@property (readonly, weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKCodeServiceImplementation *implementation;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;

- (id)description;
- (id)init;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)boxedDatabaseScope;
- (id)_initWithImplementation:(id)a0 container:(id)a1;

@end

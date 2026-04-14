@class CKCodeServiceImplementation, NSString, NSURL, CKContainer;

@interface CKCodeService : NSObject

@property (readonly, weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKCodeServiceImplementation *implementation;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;

- (id)initInternalWithImplementation:(id)a0 container:(id)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)boxedDatabaseScope;
- (id)description;
- (id)init;

@end

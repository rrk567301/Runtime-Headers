@class NSString, BMAccessDescriptor, BMResourceContainer;

@interface _BMSandboxExtensionAccessAssertion : NSObject <BMAccessAssertion>

@property (readonly, nonatomic) BMAccessDescriptor *descriptor;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BMResourceContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescriptor:(id)a0 container:(id)a1;

@end

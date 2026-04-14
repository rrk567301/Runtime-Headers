@class NSString, BMAccessDescriptor, BMResourceContainer;

@interface _BMAccessAssertion : NSObject <BMAccessAssertion> {
    long long _handle;
}

@property (readonly, nonatomic) BMAccessDescriptor *descriptor;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BMResourceContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;

@end

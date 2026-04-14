@class BMResourceContainer;

@interface CCDataResourceWriteAccess : NSObject {
    BMResourceContainer *_containerOverride;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (BOOL)performMaintenanceActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (id)requestAccess:(id *)a0 forResource:(id)a1 withMode:(unsigned long long)a2 error:(id *)a3;
- (id)setWriterForSet:(id)a0 accessAssertion:(id)a1;
- (id)_resolveContainer:(id)a0;
- (id)initWithContainerOverride:(id)a0;

@end

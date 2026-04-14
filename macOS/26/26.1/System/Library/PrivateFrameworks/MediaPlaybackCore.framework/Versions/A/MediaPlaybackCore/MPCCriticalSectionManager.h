@interface MPCCriticalSectionManager : NSObject {
    void /* unknown type, empty encoding */ _context;
}

@property (class, nonatomic, readonly) MPCCriticalSectionManager *shared;

@property (nonatomic, readonly) BOOL inCriticalSection;

- (void).cxx_destruct;
- (id)init;
- (id)takeAssertion:(id)a0;
- (id)performTaskNamed:(id)a0 afterCriticalSection:(id /* block */)a1;
- (id)performTaskNamed:(id)a0 afterCriticalSection:(id /* block */)a1 onCancel:(id /* block */)a2;
- (id)performUniqueTaskNamed:(id)a0 afterCriticalSection:(id /* block */)a1 onCancel:(id /* block */)a2;

@end

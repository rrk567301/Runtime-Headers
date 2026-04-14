@class NSString, PFPosterExtensionInstance;

@interface _PFPosterExtensionInstanceEntry : NSObject <BSInvalidatable>

@property (readonly, nonatomic) PFPosterExtensionInstance *instance;
@property (readonly, nonatomic) unsigned long long referenceCount;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInstance:(id)a0;
- (void)decrementReferenceCount;
- (void)incrementReferenceCount;

@end

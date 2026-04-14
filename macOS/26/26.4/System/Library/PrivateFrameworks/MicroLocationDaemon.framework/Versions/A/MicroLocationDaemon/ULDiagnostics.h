@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ULDiagnostics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } providersLock;
@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic) void *cppProviders;

- (void)removeProvider:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addProvider:(id)a0;
- (void)_registerStateHandler;
- (id)init;
- (void)dealloc;
- (void)addCppProvider:(struct shared_ptr<ULCppDiagnostics::ULCppDiagnosticsProvider> { struct ULCppDiagnosticsProvider *x0; struct __shared_weak_count *x1; })a0;
- (struct vector<std::shared_ptr<ULCppDiagnostics::ULCppDiagnosticsProvider>, std::allocator<std::shared_ptr<ULCppDiagnostics::ULCppDiagnosticsProvider>>> { void *x0; void *x1; struct { void *x0; } x2; })getCppProviders;
- (id)_diagnosticsInfo;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateDataForInfo:(id)a0;
- (unsigned long long)getCppProviderCount;
- (void)removeCppProvider:(struct shared_ptr<ULCppDiagnostics::ULCppDiagnosticsProvider> { struct ULCppDiagnosticsProvider *x0; struct __shared_weak_count *x1; })a0;

@end

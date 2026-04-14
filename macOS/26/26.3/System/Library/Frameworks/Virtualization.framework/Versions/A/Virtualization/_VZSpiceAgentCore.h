@class NSString, _VZSpiceAgentCoreSession, NSMutableDictionary;

@interface _VZSpiceAgentCore : NSObject <NSPasteboardItemDataProvider> {
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    struct FileDescriptor { int _fd; } _writesFd;
    struct FileDescriptor { int _fd; } _readsFd;
    struct DispatchSource { struct OpaqueId *_object; } _readSource;
    BOOL _readSourceActive;
    struct MallocPtr<unsigned int> { unsigned int *_ptr; } _hostCapabilities;
    _VZSpiceAgentCoreSession *_session;
    NSMutableDictionary *_supportedPasteboards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)stop;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isValid;
- (id).cxx_construct;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)didClosePort;
- (void)didOpenPort;
- (id)initWithPasteboard:(id)a0 queue:(struct DispatchQueue { struct OpaqueId *x0; })a1 capabilities:(id)a2 input:(struct FileDescriptor { int x0; } *)a3 output:(struct FileDescriptor { int x0; } *)a4;

@end

@class NSString, VZSpiceAgentSession, VZVirtioConsolePort, VZVirtualMachine, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VZSpiceAgent : NSObject <VZGuestAgent, NSPasteboardItemDataProvider, VZVirtioConsoleDeviceDelegate> {
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    VZVirtualMachine *_virtualMachine;
    VZVirtioConsolePort *_consolePort;
    struct PipePair { struct FileDescriptor { int _fd; } for_reading; struct FileDescriptor { int _fd; } for_writing; } _inputPipe;
    struct PipePair { struct FileDescriptor { int _fd; } for_reading; struct FileDescriptor { int _fd; } for_writing; } _outputPipe;
    struct FileDescriptor { int _fd; } _writesFd;
    struct FileDescriptor { int _fd; } _readsFd;
    struct DispatchSource { struct CfPtr<NSObject<OS_dispatch_source> *> { NSObject<OS_dispatch_source> *_ptr; } _source; } _readSource;
    struct MallocPtr<unsigned int> { unsigned int *_ptr; } _hostCapabilities;
    VZSpiceAgentSession *_session;
    NSMutableDictionary *_supportedPasteboards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)consoleDevice:(id)a0 didClosePort:(id)a1;
- (void)consoleDevice:(id)a0 didOpenPort:(id)a1;

@end

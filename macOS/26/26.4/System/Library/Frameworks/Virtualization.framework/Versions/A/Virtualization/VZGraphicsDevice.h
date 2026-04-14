@class NSArray, VZVirtualMachine, NSMutableArray;

@interface VZGraphicsDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    unsigned long long _graphicsDeviceIndex;
    NSMutableArray *_displays;
    unsigned long long _displayPortCount;
}

@property (readonly) unsigned long long _displayPortCount;
@property (readonly, copy) NSArray *displays;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_attachDisplay:(id)a0 completionHandler:(id /* block */)a1;
- (void)_detachDisplay:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithVirtualMachine:(id)a0 graphicsDeviceIndex:(unsigned long long)a1 displayPortCount:(unsigned long long)a2 displays:(id)a3;
- (BOOL)_validateDisplayForHotPlug:(id)a0 error:(id *)a1;

@end

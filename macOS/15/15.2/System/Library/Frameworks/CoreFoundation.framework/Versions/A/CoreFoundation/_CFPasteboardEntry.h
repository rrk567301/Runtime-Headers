@class NSObject;
@protocol OS_xpc_object, OS_dispatch_group;

@interface _CFPasteboardEntry : NSObject {
    struct __CFData { } *_data;
    NSObject<OS_xpc_object> *_xpcData;
    id /* block */ _promisor;
    id /* block */ _asyncPromisor;
    NSObject<OS_dispatch_group> *_promiseGroup;
    NSObject<OS_xpc_object> *_promisorConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic unsigned char _promiseState;
}

@property (readonly) struct __CFString { } *flavorName;
@property (readonly) int itemIdentifier;
@property (readonly) struct __CFUUID { } *promiseUUID;
@property (readonly) unsigned char hasData;
@property (readonly) unsigned char hasLocalPromise;
@property (readonly) unsigned char promisorExistsInCurrentProcess;
@property unsigned long long dataFlags;
@property (getter=isHidden) unsigned char hidden;
@property unsigned char isPendingFlush;
@property unsigned char extensionConsumed;

- (void)dealloc;
- (id)description;
- (id /* block */)requestDataForPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; struct __CFData *x13; struct __CFDictionary *x14; id /* block */ x15; id /* block */ x16; double x17; } *)a0 generation:(long long)a1 immediatelyAvailableResult:(struct { int x0; long long x1; struct __CFData *x2; unsigned long long x3; } *)a2;
- (id)_createXPCData;
- (void)_setLocalPromiseState:(unsigned char)a0;
- (struct __CFData { } *)createDataAndReturnError:(int *)a0;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)a0;
- (id)initFromXPCObject:(id)a0 fromConnection:(id)a1;
- (id)initWithFlavorName:(struct __CFString { } *)a0 itemIdentifier:(int)a1;
- (void)promiseDataWithBlock:(id /* block */)a0 forPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; struct __CFData *x13; struct __CFDictionary *x14; id /* block */ x15; id /* block */ x16; double x17; } *)a1 generation:(long long)a2;
- (void)promiseDataWithFetchOperation:(id)a0;
- (void)resolveClientPromisedDataWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned char)resolveLocalPromisedData;
- (void)setData:(struct __CFData { } *)a0;

@end

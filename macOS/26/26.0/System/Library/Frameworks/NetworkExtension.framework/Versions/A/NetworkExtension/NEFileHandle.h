@class NSFileHandle, NSObject;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) BOOL launchOwnerWhenReadable;
@property (readonly) NSFileHandle *handle;

- (id)initWithFileDescriptor:(int)a0 launchOwnerWhenReadable:(BOOL)a1;
- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;

@end

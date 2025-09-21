@class NSFileHandle, NSObject;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) char launchOwnerWhenReadable;
@property (readonly) NSFileHandle *handle;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)initWithFileDescriptor:(int)a0 launchOwnerWhenReadable:(char)a1;

@end

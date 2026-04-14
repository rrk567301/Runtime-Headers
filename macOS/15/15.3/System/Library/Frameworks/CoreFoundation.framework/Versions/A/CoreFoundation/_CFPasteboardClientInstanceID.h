@class NSObject;
@protocol OS_xpc_object;

@interface _CFPasteboardClientInstanceID : NSObject

@property (readonly) struct __CFUUID { } *uuid;
@property (readonly) NSObject<OS_xpc_object> *connection;

- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)a0;

@end

@class NSString, NSXPCListenerEndpoint, DIClient2IODaemonXPCHandler;

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) DIClient2IODaemonXPCHandler *client2IOhandler;
@property (nonatomic) char handleRefCount;
@property (readonly, nonatomic) unsigned long long regEntryID;
@property (copy) NSString *BSDName;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegEntryID:(unsigned long long)a0 xpcEndpoint:(id)a1;
- (char)addToRefCountWithError:(id *)a0;
- (id)initWithRegEntryID:(unsigned long long)a0;
- (char)updateBSDNameWithBlockDevice:(id)a0 error:(id *)a1;
- (char)waitForDeviceWithError:(id *)a0;
- (char)waitForQuietWithService:(unsigned int)a0 error:(id *)a1;

@end

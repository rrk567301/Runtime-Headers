@class NSString, CLServiceVendor, CLSilo;
@protocol CLIntersiloUniverse;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>

@property (readonly, nonatomic) id<CLIntersiloUniverse> universe;
@property (nonatomic) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) CLServiceVendor *vendor;

+ (char)isSupported;
+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInboundProtocol:(id)a0 outboundProtocol:(id)a1;
- (void)setSilo:(id)a0;
- (void)setVendor:(id)a0;

@end

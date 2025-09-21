@class NSString;

@interface _BSNSXPCConnectionEvent : NSObject <BSNSXPCConnectionHaltEvent> {
    int _code;
}

@property (readonly, nonatomic, getter=isKnownToBeOnQueue) BOOL knownToBeOnQueue;
@property (readonly, nonatomic, getter=isPermanent) BOOL permanent;
@property (readonly, nonatomic, getter=isLocalCancel) BOOL localCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end

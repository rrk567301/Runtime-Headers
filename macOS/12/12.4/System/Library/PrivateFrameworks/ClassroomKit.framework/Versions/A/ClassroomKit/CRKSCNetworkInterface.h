@class NSString;

@interface CRKSCNetworkInterface : NSObject {
    struct __SCNetworkInterface { } *mInterfaceRef;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *MACAddress;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) CRKSCNetworkInterface *lastNonLayeringChildInterface;

- (void)dealloc;
- (id)initWithSCNetworkInterface:(struct __SCNetworkInterface { } *)a0;

@end

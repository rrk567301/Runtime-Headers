@class NSString, CECInterface, NSMutableSet, NSDictionary;

@interface CECRouter : NSObject <CECInterfaceDelegate> {
    CECInterface *_sinkInterface;
    NSMutableSet *_interfaces;
    NSDictionary *_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)routerWithSinkInterface:(id)a0;

- (void)dealloc;
- (id)properties;
- (char)interface:(id)a0 setAddressMask:(unsigned short)a1 error:(id *)a2;
- (id)initWithSinkInterface:(id)a0;
- (void)interface:(id)a0 hibernationChanged:(char)a1;
- (void)interface:(id)a0 receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1;
- (char)interface:(id)a0 sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1 withRetryCount:(unsigned char)a2 error:(id *)a3;
- (char)interface:(id)a0 setSnoopingMode:(char)a1 error:(id *)a2;
- (void)interfacePropertiesChanged:(id)a0;
- (id)newRouterInterface;

@end

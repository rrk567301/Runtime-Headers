@interface WiFiP2PXPCExportedObjectProxy : NSObject {
    Class _exportedObjectClass;
}

@property (weak, nonatomic) id exportedObject;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end

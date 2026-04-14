@interface WiFiP2PXPCExportedObjectProxy : NSObject {
    Class _exportedObjectClass;
}

@property (weak, nonatomic) id exportedObject;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end

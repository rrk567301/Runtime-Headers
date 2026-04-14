@interface _TPSXPCExportedObjectProxy : NSObject

@property (weak, nonatomic) id weakExportedObject;
@property (retain, nonatomic) Class weakExportedObjectClass;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end

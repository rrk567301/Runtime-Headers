@interface MUImageWriter : NSObject

- (id)encodedModelFromAnnotationsController:(id)a0 encrypt:(char)a1;
- (char)writeUsingBaseImage:(id)a0 withAnnotationsFromController:(id)a1 asImageOfType:(id)a2 toConsumer:(struct CGDataConsumer { } *)a3 embedSourceImageAndAnnotationsAsMetadata:(char)a4 encryptPrivateMetadata:(char)a5 error:(id *)a6;

@end

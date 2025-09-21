@interface PPKImageWriter : NSObject

- (char)writeUsingBaseImage:(id)a0 annotationImage:(struct CGImage { } *)a1 asImageOfType:(id)a2 toConsumer:(struct CGDataConsumer { } *)a3 annotationMetadata:(id)a4 modifiedImageDescription:(id)a5 encryptPrivateMetadata:(char)a6 error:(id *)a7;

@end

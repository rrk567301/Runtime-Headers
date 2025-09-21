@interface PPKImageWriter : NSObject

- (BOOL)writeUsingBaseImage:(id)a0 annotationImage:(struct CGImage { } *)a1 sdrAnnotationImage:(struct CGImage { } *)a2 asImageOfType:(id)a3 toConsumer:(struct CGDataConsumer { } *)a4 annotationMetadata:(id)a5 modifiedMetadataHandler:(id /* block */)a6 encryptPrivateMetadata:(BOOL)a7 error:(id *)a8;

@end

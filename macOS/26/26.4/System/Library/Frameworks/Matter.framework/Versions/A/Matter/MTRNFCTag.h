@interface MTRNFCTag : NSObject {
    struct unique_ptr<MTRNFCTagUtility, std::default_delete<MTRNFCTagUtility>> { struct { struct MTRNFCTagUtility *__ptr_; } ; } tagUtility;
}

@property (getter=isSelected) BOOL selected;
@property unsigned short discriminator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)connectWithError:(id *)a0;
- (BOOL)disconnectWithError:(id *)a0;
- (id)transceive:(id)a0 error:(id *)a1;
- (id)initWithDiscriminator:(unsigned short)a0;
- (BOOL)selectTagWithError:(id *)a0;
- (BOOL)sendMessage:(id)a0 responseBlock:(id /* block */)a1;

@end

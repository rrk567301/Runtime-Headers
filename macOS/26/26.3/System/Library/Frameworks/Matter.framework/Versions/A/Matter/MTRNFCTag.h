@interface MTRNFCTag : NSObject {
    struct unique_ptr<MTRNFCTagUtility, std::default_delete<MTRNFCTagUtility>> { struct { struct MTRNFCTagUtility *__ptr_; } ; } tagUtility;
}

@property (getter=isSelected) BOOL selected;
@property unsigned short discriminator;

- (BOOL)connectWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)disconnectWithError:(id *)a0;
- (id).cxx_construct;
- (id)transceive:(id)a0 error:(id *)a1;
- (id)initWithDiscriminator:(unsigned short)a0;
- (BOOL)selectTagWithError:(id *)a0;
- (BOOL)sendMessage:(id)a0 responseBlock:(id /* block */)a1;

@end

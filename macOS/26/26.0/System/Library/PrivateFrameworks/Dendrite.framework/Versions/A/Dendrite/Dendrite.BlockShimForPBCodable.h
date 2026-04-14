@interface Dendrite.BlockShimForPBCodable : PBCodable {
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ error;
}

- (id)initWithData:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;

@end

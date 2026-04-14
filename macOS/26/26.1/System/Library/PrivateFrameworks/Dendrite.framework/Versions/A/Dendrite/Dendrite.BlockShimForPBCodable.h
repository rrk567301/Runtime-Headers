@interface Dendrite.BlockShimForPBCodable : PBCodable {
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ error;
}

- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)writeTo:(id)a0;

@end

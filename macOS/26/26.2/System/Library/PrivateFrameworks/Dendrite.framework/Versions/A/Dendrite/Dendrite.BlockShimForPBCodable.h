@interface Dendrite.BlockShimForPBCodable : PBCodable {
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ error;
}

- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

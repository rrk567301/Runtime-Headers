@protocol DRTexture;

@interface REDirectTexturePayload : RESharedResourcePayload {
    unsigned char _identifier[16];
}

@property (retain, nonatomic) id<DRTexture> directTexture;
@property (readonly, nonatomic) const unsigned char[16] *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDirectTexture:(id)a0;

@end

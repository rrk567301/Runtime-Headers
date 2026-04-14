@protocol DRTexture;

@interface REDirectTexturePayload : RESharedResourcePayload {
    unsigned char _identifier[16];
}

@property (retain, nonatomic) id<DRTexture> directTexture;
@property (readonly, nonatomic) const unsigned char[16] *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDirectTexture:(id)a0;

@end

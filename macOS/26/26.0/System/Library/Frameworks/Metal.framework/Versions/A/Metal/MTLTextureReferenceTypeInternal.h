@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    BOOL _isDepthTexture;
}

- (unsigned long long)textureType;
- (BOOL)isDepthTexture;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)a0 textureType:(unsigned long long)a1 access:(unsigned long long)a2 isDepthTexture:(BOOL)a3;
- (unsigned long long)dataType;
- (unsigned long long)access;
- (unsigned long long)textureDataType;
- (BOOL)isEqual:(id)a0;

@end

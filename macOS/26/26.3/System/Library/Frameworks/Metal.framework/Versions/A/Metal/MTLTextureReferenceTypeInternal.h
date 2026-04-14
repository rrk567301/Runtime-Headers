@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    BOOL _isDepthTexture;
}

- (unsigned long long)textureType;
- (unsigned long long)dataType;
- (unsigned long long)textureDataType;
- (id)initWithDataType:(unsigned long long)a0 textureType:(unsigned long long)a1 access:(unsigned long long)a2 isDepthTexture:(BOOL)a3;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (BOOL)isDepthTexture;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)access;

@end

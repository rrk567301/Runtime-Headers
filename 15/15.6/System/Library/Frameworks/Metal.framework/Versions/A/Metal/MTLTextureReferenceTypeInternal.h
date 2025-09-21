@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    char _isDepthTexture;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (unsigned long long)textureDataType;
- (unsigned long long)access;
- (unsigned long long)dataType;
- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)initWithDataType:(unsigned long long)a0 textureType:(unsigned long long)a1 access:(unsigned long long)a2 isDepthTexture:(char)a3;
- (char)isDepthTexture;

@end

@class NSString, NSData, AFBBufRef;

@interface TRIFBFactorMetadataKeyValue : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct FactorMetadataKeyValue { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) const char *keyAsCString;
@property (readonly, nonatomic) NSData *keyAsData;
@property (readonly, nonatomic) NSString *val;
@property (readonly, nonatomic) const char *valAsCString;
@property (readonly, nonatomic) NSData *valAsData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(char)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(char)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct FactorMetadataKeyValue { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (char)verifyUTF8Fields;

@end

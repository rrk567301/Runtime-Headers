@class AFBBufRef, _SDSDataLayoutItemInfo;

@interface _SDSDataLayoutFieldInfo : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct DataLayoutFieldInfo { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) BOOL hasSize;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) _SDSDataLayoutItemInfo *layoutInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct DataLayoutFieldInfo { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end

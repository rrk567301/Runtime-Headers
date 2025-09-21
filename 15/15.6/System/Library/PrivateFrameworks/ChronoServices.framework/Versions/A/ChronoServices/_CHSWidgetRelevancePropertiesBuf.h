@class _CHSExtensionIdentityBuf, NSString, NSArray, NSData, AFBBufRef;

@interface _CHSWidgetRelevancePropertiesBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct WidgetRelevancePropertiesBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) _CHSExtensionIdentityBuf *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) const char *kindAsCString;
@property (readonly, nonatomic) NSData *kindAsData;
@property (readonly, nonatomic) char hasSupportsBackgroundRefresh;
@property (readonly, nonatomic) char supportsBackgroundRefresh;
@property (readonly, nonatomic) char hasIsDeletion;
@property (readonly, nonatomic) char isDeletion;
@property (readonly, nonatomic) char hasLastRelevanceUpdate;
@property (readonly, nonatomic) double lastRelevanceUpdate;
@property (readonly, nonatomic) NSArray *relevances;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct WidgetRelevancePropertiesBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (char)verifyUTF8Fields;

@end

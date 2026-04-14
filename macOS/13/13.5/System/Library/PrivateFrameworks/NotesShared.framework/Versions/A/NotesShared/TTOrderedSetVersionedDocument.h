@class CROrderedSet, ICCRDocument;

@interface TTOrderedSetVersionedDocument : TTVersionedDocument

@property (readonly) ICCRDocument *document;
@property (retain, nonatomic) CROrderedSet *orderedSet;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (unsigned long long)mergeWithOrderedSetVersionedDocument:(id)a0;

@end

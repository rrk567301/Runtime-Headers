@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument

@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (id)initWithMergeableString:(id)a0;
- (unsigned long long)mergeWithStringVersionedDocument:(id)a0;

@end

@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setLabel:(id)a0;
- (id)label;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)sampleCount;
- (id)counterSet;
- (void)setCounterSet:(id)a0;

@end

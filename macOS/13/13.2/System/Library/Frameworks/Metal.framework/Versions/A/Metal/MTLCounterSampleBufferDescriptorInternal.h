@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (id)label;
- (void)setLabel:(id)a0;
- (unsigned long long)storageMode;
- (unsigned long long)sampleCount;
- (void)setStorageMode:(unsigned long long)a0;
- (id)counterSet;
- (void)setCounterSet:(id)a0;

@end

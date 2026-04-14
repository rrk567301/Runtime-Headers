@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying>

@property (readonly) unsigned long long value;
@property (readonly, getter=isInitial) BOOL initial;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)a0;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)a0;

@end

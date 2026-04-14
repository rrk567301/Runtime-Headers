@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject

@property (readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSequenceNumber:(id)a0 data:(id)a1 type:(id)a2;

@end

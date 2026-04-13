@class NSNumber, NSData;

@interface HMDStreamDataChunk : HMFObject

@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly) BOOL isLast;
@property (readonly, copy) NSData *data;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)a0;
- (id)initWithSequenceNumber:(id)a0 data:(id)a1 isLast:(BOOL)a2;

@end

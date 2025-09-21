@class NSData, NSNumber, NSString;

@interface HMDDataStreamFragment : HMFObject <NSCopying>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isInitial) char initial;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithData:(id)a0 sequenceNumber:(id)a1 type:(id)a2;

@end

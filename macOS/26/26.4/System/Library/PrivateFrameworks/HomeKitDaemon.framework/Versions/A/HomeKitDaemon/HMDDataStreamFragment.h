@class NSString, NSData, NSDate, NSNumber;

@interface HMDDataStreamFragment : HMFObject <NSCopying>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isInitial) BOOL initial;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_producerReferenceDateFromFragmentData:(id)a0;
- (id)initWithData:(id)a0 sequenceNumber:(id)a1 type:(id)a2;

@end

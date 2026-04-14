@class NSString, NSData, NSDate, NSNumber;

@interface HMDDataStreamFragment : HMFObject <NSCopying>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isInitial) BOOL initial;

+ (id)logCategory;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 sequenceNumber:(id)a1 type:(id)a2;

@end

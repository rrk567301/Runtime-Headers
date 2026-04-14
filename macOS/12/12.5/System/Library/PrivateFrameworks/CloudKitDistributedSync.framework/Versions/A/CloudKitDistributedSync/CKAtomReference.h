@class CKMergeableValueID, CKAtomLocation, CKDistributedTimestamp;

@interface CKAtomReference : NSObject <NSCopying>

@property (nonatomic) unsigned char type;
@property (retain, nonatomic) CKMergeableValueID *mergeableValueID;
@property (retain, nonatomic) CKDistributedTimestamp *timestamp;
@property (readonly, nonatomic) CKAtomLocation *location;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0;
- (BOOL)isEqualToReference:(id)a0;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1 type:(unsigned char)a2;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1;
- (id)initWithMergeableValueID:(id)a0;
- (id)initWithLocation:(id)a0 timestamp:(id)a1 type:(unsigned char)a2;

@end

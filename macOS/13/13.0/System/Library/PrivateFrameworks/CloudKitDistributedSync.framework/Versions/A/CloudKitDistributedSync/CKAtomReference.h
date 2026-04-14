@class CKMergeableValueID, CKDistributedTimestamp;

@interface CKAtomReference : NSObject <NSCopying>

@property (nonatomic) unsigned char type;
@property (retain, nonatomic) CKMergeableValueID *mergeableValueID;
@property (retain, nonatomic) CKDistributedTimestamp *timestamp;
@property (readonly, nonatomic) CKMergeableValueID *location;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToReference:(id)a0;
- (id)initWithMergeableValueID:(id)a0;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1 type:(unsigned char)a2;

@end

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorRangesByEntityIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (unsigned long long)anchorRangeCount;
- (id)codableSyncAnchorRangeMap;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (char)getAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; } *)a0 forSyncEntityIdentifier:(id)a1;
- (id)initWithCodableSyncAnchorRangeMap:(id)a0 error:(id *)a1;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a0 forSyncEntityIdentifier:(id)a1;

@end

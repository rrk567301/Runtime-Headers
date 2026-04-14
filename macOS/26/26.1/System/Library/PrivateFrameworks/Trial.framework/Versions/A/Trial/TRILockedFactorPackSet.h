@class NSString, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorPackSetId;

@interface TRILockedFactorPackSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) TRIReferenceManagedDirReaderLock *lock;

+ (id)lockedSetWithFactorPackSetId:(id)a0 path:(id)a1 lock:(id)a2;

- (id)copyWithReplacementLock:(id)a0;
- (id)initWithFactorPackSetId:(id)a0 path:(id)a1 lock:(id)a2;
- (unsigned long long)hash;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)description;
- (BOOL)isEqualToLockedSet:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementPath:(id)a0;
- (id)init;

@end

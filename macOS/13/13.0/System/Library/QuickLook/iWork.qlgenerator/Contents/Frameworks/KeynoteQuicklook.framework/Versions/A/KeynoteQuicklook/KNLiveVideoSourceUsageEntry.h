@class NSSet;

@interface KNLiveVideoSourceUsageEntry : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *archivedBackgroundKinds;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithArchivedBackgroundKinds:(id)a0;
- (id)entryByMergingEntry:(id)a0;

@end

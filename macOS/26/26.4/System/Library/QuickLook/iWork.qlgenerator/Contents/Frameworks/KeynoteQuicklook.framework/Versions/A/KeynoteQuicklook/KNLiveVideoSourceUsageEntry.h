@class NSSet;

@interface KNLiveVideoSourceUsageEntry : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *archivedBackgroundKinds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)entryByMergingEntry:(id)a0;
- (id)initWithArchivedBackgroundKinds:(id)a0;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end

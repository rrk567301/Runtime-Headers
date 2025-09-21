@class NSUUID;

@interface KNLiveVideoSourceCollaborationCommandUsageState : TSCKSosBase <NSCopying> {
    NSUUID *_singleCollaborationCommandUsageToken;
    char _definedSingleCollaborationCommandUsageToken;
}

@property (readonly, nonatomic) char hasMultipleCollaborationCommandUsageTokens;

+ (id)emptyUsageState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithSingleCollaborationCommandUsageToken:(id)a0 hasMultipleCollaborationCommandUsageTokens:(char)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)usageStateByAddingCollaborationCommandUsageToken:(id)a0;

@end

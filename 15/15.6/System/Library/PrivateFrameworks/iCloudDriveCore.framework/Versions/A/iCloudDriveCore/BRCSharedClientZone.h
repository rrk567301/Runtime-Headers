@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) char isSharedZone;
@property (readonly, nonatomic) char isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (void).cxx_destruct;
- (id)rootItemID;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (id)asSharedClientZone;
- (void)removeAllShareAcceptationSidefaults;
- (void)setServerZone:(id)a0;
- (id)shareAcceptOperationForItemID:(id)a0;
- (id)shareAcceptationSidefaultEnumerator;

@end

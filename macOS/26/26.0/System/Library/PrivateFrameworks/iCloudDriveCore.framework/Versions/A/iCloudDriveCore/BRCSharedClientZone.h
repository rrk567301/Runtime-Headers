@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (id)shareAcceptOperationForItemID:(id)a0;
- (void)setServerZone:(id)a0;
- (id)rootItemID;
- (void)removeAllShareAcceptationSidefaults;
- (id)shareAcceptationSidefaultEnumerator;
- (id)asSharedClientZone;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (void).cxx_destruct;

@end

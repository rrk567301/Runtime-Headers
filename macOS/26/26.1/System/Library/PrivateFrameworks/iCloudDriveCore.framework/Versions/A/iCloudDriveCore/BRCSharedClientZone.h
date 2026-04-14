@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (id)rootItemID;
- (void)removeAllShareAcceptationSidefaults;
- (id)shareAcceptOperationForItemID:(id)a0;
- (void)setServerZone:(id)a0;
- (id)shareAcceptationSidefaultEnumerator;
- (id)asSharedClientZone;
- (void).cxx_destruct;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;

@end

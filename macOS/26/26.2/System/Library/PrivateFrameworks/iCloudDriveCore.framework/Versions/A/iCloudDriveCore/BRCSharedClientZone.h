@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (id)asSharedClientZone;
- (void)setServerZone:(id)a0;
- (id)shareAcceptOperationForItemID:(id)a0;
- (id)shareAcceptationSidefaultEnumerator;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (id)rootItemID;
- (void)removeAllShareAcceptationSidefaults;
- (void).cxx_destruct;

@end

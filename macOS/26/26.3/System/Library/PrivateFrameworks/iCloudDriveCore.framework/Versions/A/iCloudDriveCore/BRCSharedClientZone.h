@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (id)rootItemID;
- (id)asSharedClientZone;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (id)shareAcceptationSidefaultEnumerator;
- (void)setServerZone:(id)a0;
- (void).cxx_destruct;
- (void)removeAllShareAcceptationSidefaults;
- (id)shareAcceptOperationForItemID:(id)a0;

@end

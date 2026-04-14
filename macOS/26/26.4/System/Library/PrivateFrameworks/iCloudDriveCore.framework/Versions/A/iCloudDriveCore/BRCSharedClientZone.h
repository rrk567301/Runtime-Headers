@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (void)setServerZone:(id)a0;
- (void)removeAllShareAcceptationSidefaults;
- (void).cxx_destruct;
- (id)shareAcceptOperationForItemID:(id)a0;
- (id)rootItemID;
- (id)asSharedClientZone;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (id)shareAcceptationSidefaultEnumerator;

@end

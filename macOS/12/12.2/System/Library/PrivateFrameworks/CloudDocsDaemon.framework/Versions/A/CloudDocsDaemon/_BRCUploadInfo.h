@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo

@property (readonly, nonatomic) NSMutableSet *outOfQuotaDocIDs;
@property (readonly, nonatomic) BOOL allUploadsPendingQuota;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;

@end

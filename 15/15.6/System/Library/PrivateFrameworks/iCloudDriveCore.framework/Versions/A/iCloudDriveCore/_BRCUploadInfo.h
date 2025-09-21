@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo

@property (readonly, nonatomic) NSMutableSet *outOfQuotaObjIDs;
@property (readonly, nonatomic) char allUploadsPendingQuota;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;

@end

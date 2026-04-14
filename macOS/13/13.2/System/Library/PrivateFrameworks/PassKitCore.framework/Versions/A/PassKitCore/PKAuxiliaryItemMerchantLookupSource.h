@class NSString, PKPassAuxiliaryPassInformationItem;

@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)type;
- (id)identifier;
- (id)mapsURL;
- (BOOL)isSettlement;
- (BOOL)isRefund;
- (id)mapsMerchantLookupRequest;
- (id)initWithAuxiliaryItem:(id)a0;

@end

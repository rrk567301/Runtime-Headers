@class NSString, PKPassAuxiliaryPassInformationItem;

@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)type;
- (id)identifier;
- (id)mapsURL;
- (BOOL)isRefund;
- (void).cxx_destruct;
- (BOOL)isSettlement;
- (id)initWithAuxiliaryItem:(id)a0;
- (id)mapsMerchantLookupRequest;

@end

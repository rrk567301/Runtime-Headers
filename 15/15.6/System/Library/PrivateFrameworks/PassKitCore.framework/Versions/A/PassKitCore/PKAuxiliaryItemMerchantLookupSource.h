@class NSString, PKPassAuxiliaryPassInformationItem;

@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (id)mapsURL;
- (char)isRefund;
- (char)isSettlement;
- (id)initWithAuxiliaryItem:(id)a0;
- (id)mapsMerchantLookupRequest;

@end

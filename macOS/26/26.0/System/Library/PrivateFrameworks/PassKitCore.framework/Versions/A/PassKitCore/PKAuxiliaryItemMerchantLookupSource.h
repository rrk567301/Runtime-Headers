@class NSString, PKPassAuxiliaryPassInformationItem;

@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (long long)type;
- (BOOL)isSettlement;
- (id)mapsURL;
- (BOOL)isRefund;
- (void).cxx_destruct;
- (id)initWithAuxiliaryItem:(id)a0;
- (id)mapsMerchantLookupRequest;

@end

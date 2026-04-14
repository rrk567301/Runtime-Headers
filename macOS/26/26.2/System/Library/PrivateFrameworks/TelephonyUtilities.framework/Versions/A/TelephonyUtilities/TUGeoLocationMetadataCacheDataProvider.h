@class PNRPhoneNumberResolver;

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver;

- (void).cxx_destruct;
- (id)locationForMetadataIdentifier:(id)a0;
- (id)init;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;

@end

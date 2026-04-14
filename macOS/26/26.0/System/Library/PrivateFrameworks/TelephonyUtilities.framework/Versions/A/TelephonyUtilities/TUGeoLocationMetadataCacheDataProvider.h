@class PNRPhoneNumberResolver;

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver;

- (id)init;
- (id)locationForMetadataIdentifier:(id)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void).cxx_destruct;

@end

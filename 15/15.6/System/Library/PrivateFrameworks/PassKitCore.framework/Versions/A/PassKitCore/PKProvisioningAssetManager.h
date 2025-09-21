@interface PKProvisioningAssetManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)_assetNameWithScreenScalingSuffix:(id)a0;
- (id)_carPairingImageFromBundle:(id)a0 darkMode:(char)a1;
- (void)_defaultCarPairingImage:(unsigned long long)a0 darkMode:(char)a1 completion:(id /* block */)a2;
- (void)_defaultCardArtwork:(id /* block */)a0;
- (void)carPairingImageForRadioTechnology:(unsigned long long)a0 templateIdentifier:(id)a1 darkMode:(char)a2 completion:(id /* block */)a3;
- (void)cardArtworkForTemplateIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)provisioningString:(id)a0 templateIdentifier:(id)a1;

@end

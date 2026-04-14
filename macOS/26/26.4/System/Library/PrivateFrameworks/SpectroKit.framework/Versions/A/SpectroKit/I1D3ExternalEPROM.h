@class NSString, NSDictionary, NSData, I1D3ExternalEPROMHeader, I1D3ExternalEPROMSpectral;

@interface I1D3ExternalEPROM : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) unsigned short mapVersion;
@property (nonatomic) unsigned short checksum;
@property (retain, nonatomic) I1D3ExternalEPROMHeader *header;
@property (retain, nonatomic) NSDictionary *sensitivitiesByKey;
@property (retain, nonatomic) I1D3ExternalEPROMHeader *ambientHeader;
@property (retain, nonatomic) I1D3ExternalEPROMSpectral *ambientSensitivitiesByKey;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *deviceKey;
@property (nonatomic) unsigned char speed;
@property (nonatomic) unsigned char allowedModes;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)spectralGroupForAmbientSensitivities;
- (id)spectralGroupForRgbSensitivities;

@end

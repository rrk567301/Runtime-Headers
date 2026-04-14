@class NSString;

@interface I1D3InternalEPROM : NSObject {
    unsigned int darkCurrent[3];
}

@property (nonatomic) unsigned int deviceNumber;
@property (copy, nonatomic) NSString *customerSerialNumber;
@property (nonatomic) long long timestampManufactureDate;
@property (copy, nonatomic) NSString *hardwareVersion;
@property (nonatomic) unsigned char isRegistered;
@property (nonatomic) long long firstUseDate;
@property (nonatomic) unsigned char bootLoaderFlag;
@property (nonatomic) unsigned char DCFlag;
@property (nonatomic) unsigned char colorMunkiDisplayFlag;
@property (copy, nonatomic) NSString *pk2;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)parse:(id)a0 atOffset:(int)a1;
- (unsigned int *)darkCurrent;
- (unsigned int)darkCurrentWithIndex:(unsigned char)a0;
- (id)getTimestampAsNSDate:(long long)a0;

@end

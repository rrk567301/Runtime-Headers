@class NSString;

@interface I1D3ExternalEPROMCalibration : NSObject {
    float matrix[3][3];
}

@property (copy, nonatomic) NSString *calibrationDescription;
@property (nonatomic) unsigned char measMode;
@property (nonatomic) long long headerTimestamp;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)getTimestampAsNSDate:(long long)a0;

@end

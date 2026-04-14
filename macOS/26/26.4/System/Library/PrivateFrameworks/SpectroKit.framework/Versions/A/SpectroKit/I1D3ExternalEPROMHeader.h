@class NSString;

@interface I1D3ExternalEPROMHeader : NSObject

@property (copy, nonatomic) NSString *headerDescription;
@property (nonatomic) unsigned char headerFlags;
@property (nonatomic) long long headerTimestamp;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (id)description;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)getTimestampAsNSDate:(long long)a0;

@end

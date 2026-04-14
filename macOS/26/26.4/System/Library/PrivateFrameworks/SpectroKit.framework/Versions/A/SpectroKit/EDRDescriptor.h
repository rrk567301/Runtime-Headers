@class NSString;

@interface EDRDescriptor : NSObject

@property (copy, nonatomic) NSString *signature;
@property (nonatomic) unsigned int programVersion;
@property (nonatomic) unsigned int fileVersion;
@property (nonatomic) long long creationTime;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) unsigned int technology;
@property (nonatomic) unsigned int numColors;
@property (copy, nonatomic) NSString *EDIDName;
@property (copy, nonatomic) NSString *mfgNameFromEDID;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) unsigned short manufacturerID;
@property (nonatomic) unsigned short modelID;
@property (nonatomic) unsigned short YxyDataValid;
@property (nonatomic) unsigned short spectralDataValid;
@property (nonatomic) double wavelengthStart;
@property (nonatomic) double wavelengthEnd;
@property (nonatomic) double wavelengthIncrement;
@property (nonatomic) unsigned int numWavelengthEntries;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (id)summary;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;
- (id)getTimestampAsNSDate:(long long)a0;

@end

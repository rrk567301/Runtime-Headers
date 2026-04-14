@class NSString, NSDate;

@interface MADPowerLogData : NSObject

@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetVersion;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSString *clientName;
@property (readonly, retain, nonatomic) NSDate *timeStart;
@property (readonly, retain, nonatomic) NSDate *timeEnd;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (readonly, nonatomic) BOOL result;

- (void).cxx_destruct;
- (id)description;
- (id)convertPayloadToDict;
- (id)initWithType:(id)a0 withAssetSpecifier:(id)a1 versionNumber:(id)a2 clientName:(id)a3 startingAt:(id)a4 endingAt:(id)a5 withTotalBytes:(unsigned long long)a6 andResult:(BOOL)a7;

@end

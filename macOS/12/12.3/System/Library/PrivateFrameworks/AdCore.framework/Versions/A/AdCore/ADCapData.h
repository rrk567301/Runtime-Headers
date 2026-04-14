@class NSString, NSMutableArray;

@interface ADCapData : ADSingleton

@property (retain, nonatomic) NSString *keychainKey;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long storageType;
@property (retain, nonatomic) NSString *toroID;
@property (retain, nonatomic) NSMutableArray *frequencyCapData;
@property (retain, nonatomic) NSMutableArray *clickCountData;
@property (retain, nonatomic) NSMutableArray *downloadData;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithStorageType:(long long)a0 keychainKey:(id)a1 title:(id)a2;
- (void)restoreAllCapData;
- (void)resetCapDataObject;
- (id)restoreCapDataArrayFromPlist:(id)a0;
- (void)checkAndUpdateToroID;
- (void)saveCapDataWithReason:(id)a0;
- (void)addCapDataObject:(id)a0 ofKind:(long long)a1;
- (id)capData:(id)a0;
- (id)initWithStorageType:(long long)a0;
- (void)updateCapDataWith:(id)a0 ofKind:(long long)a1;
- (id)filteredCapData:(id)a0 maxItems:(unsigned long long)a1 expirationThresholdInSeconds:(double)a2;
- (id)capDataJSON:(id)a0;
- (id)clickCapObjectForAdamID:(id)a0;
- (id)downloadObjectForAdamID:(id)a0;
- (void)eraseCapData;

@end

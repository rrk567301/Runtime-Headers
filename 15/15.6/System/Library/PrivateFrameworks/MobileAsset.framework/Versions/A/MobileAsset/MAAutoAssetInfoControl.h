@class NSArray, NSString;

@interface MAAutoAssetInfoControl : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char clearingAfter;
@property (readonly, nonatomic) char forceUnlock;
@property (readonly, retain, nonatomic) NSArray *limitedToAssetTypes;
@property (readonly, retain, nonatomic) NSString *volumeToReclaim;
@property (readonly, nonatomic) int cacheDeleteUrgency;
@property (readonly, nonatomic) long long targetingPurgeAmount;
@property (readonly, nonatomic) long long simulateOperation;
@property (readonly, nonatomic) long long simulateEnd;

+ (id)nameOfSimulateEnd:(long long)a0;
+ (id)nameOfSimulateOperation:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initClearingAfter:(char)a0;
- (id)initClearingAfter:(char)a0 forcingUnlock:(char)a1 limitedToAssetTypes:(id)a2 withVolumeToReclaim:(id)a3 withUrgency:(int)a4 targetingPurgeAmount:(long long)a5 simulateOperation:(long long)a6 simulateEnd:(long long)a7;
- (id)initClearingAfter:(char)a0 limitedToAssetTypes:(id)a1;
- (id)initForSimulateOperation:(long long)a0 withSimulateEnd:(long long)a1;
- (id)initForcingUnlock:(char)a0;
- (id)initWithVolumeToReclaim:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2;

@end

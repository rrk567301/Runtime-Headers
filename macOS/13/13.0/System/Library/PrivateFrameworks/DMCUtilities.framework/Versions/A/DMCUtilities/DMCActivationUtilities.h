@class NSNumber, NSDictionary, NSMutableDictionary;

@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *hrnModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initPrivate;
- (void)_clearCache;
- (int)activationState;
- (id)activationRecord;
- (int)hrnMode;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;

@end

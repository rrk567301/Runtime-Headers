@class NSNumber, NSDictionary, NSMutableDictionary;

@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *hrnModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstance;

- (int)activationState;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)_clearCache;
- (int)hrnMode;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;

@end

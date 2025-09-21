@class NSNumber, NSDictionary, NSMutableDictionary;

@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *hrnModeCache;
@property (nonatomic) char isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) char isReady;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initPrivate;
- (void)_clearCache;
- (int)activationState;
- (int)hrnMode;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;

@end

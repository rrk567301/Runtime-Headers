@class NSString, NSDate;

@interface NLTaggerAssetRequest : NSObject <NLLogging> {
    id /* block */ _completionHandler;
    NSDate *_creationTime;
}

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, copy, nonatomic) NSString *tagScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)startTimer;
+ (void)checkAssetRequests;
+ (void)checkAssetRequestsTimerFired:(id)a0;

- (BOOL)hasExpired;
- (void)completeWithResult:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)waitForFulfillment;
- (id)initWithLanguage:(id)a0 assetIdentifier:(id)a1 tagScheme:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isFulfilled;

@end

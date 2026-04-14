@class NSMutableDictionary;

@interface DMCBackgroundActivityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activities;

+ (id)sharedInstance;
+ (void)cancelActivity:(id)a0;
+ (void)scheduleOneShotActivity:(id)a0 interval:(double)a1 gracePeriod:(double)a2 callback:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initPrivate;

@end

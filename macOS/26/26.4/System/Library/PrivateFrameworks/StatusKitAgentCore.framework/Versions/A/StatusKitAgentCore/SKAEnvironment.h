@class NSString, NSDate;

@interface SKAEnvironment : NSObject

@property (class, retain, nonatomic) NSDate *overrideDateNow;
@property (class, readonly, nonatomic) NSDate *dateNow;
@property (class, retain, nonatomic) NSString *overrideBootSessionUUIDPrefsKey;
@property (class, retain, nonatomic) NSString *overrideStatusKitPrefsDomain;
@property (class, retain, nonatomic) NSString *overrideSequenceNumberPrefsKey;

+ (void)reset;

@end

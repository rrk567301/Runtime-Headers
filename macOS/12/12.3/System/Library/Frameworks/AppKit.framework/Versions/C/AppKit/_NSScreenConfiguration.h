@class NSArray;

@interface _NSScreenConfiguration : NSObject

@property (class, readonly, copy) NSArray *latestScreens;
@property (class, readonly) double latestZeroScreenHeight;
@property (class, readonly) BOOL latestZeroScreenIsNew;
@property (class, readonly) double latestGreatestBackingScaleFactor;

+ (void)prepare;
+ (void)invalidateConfigurationForReason:(unsigned long long)a0;
+ (BOOL)invalidateConfigurationIfNeededForReason:(unsigned long long)a0;

@end

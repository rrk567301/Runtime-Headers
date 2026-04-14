@interface IMDeviceUtilities : NSObject

+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)IMDeviceIsIndiaRegion;
+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;

@end

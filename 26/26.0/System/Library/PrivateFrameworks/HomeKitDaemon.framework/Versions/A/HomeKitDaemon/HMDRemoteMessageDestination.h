@class NSString, NSArray;

@interface HMDRemoteMessageDestination : HMFMessageDestination

@property (readonly, copy) NSString *remoteDestinationString;
@property (readonly, copy) NSArray *allRemoteDestinationStrings;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)allMessageDestinations;

@end

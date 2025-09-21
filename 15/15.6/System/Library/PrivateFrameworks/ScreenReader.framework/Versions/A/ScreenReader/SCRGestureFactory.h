@class NSString;

@interface SCRGestureFactory : SCRCGestureFactory

@property (nonatomic) unsigned long long deviceIdentifier;
@property (nonatomic) char isFullyEnabled;
@property (nonatomic) char isBuiltIn;
@property (readonly, copy, nonatomic) NSString *hitRegion;

@end

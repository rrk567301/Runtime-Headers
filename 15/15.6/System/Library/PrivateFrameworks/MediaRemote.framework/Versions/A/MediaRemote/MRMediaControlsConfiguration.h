@class NSString, NSArray, NSMutableArray;

@interface MRMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long style;
@property (nonatomic) long long initiatorStyle;
@property (copy, nonatomic) NSString *routingContextUID;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (copy, nonatomic) NSString *nowPlayingAppBundleID;
@property (copy, nonatomic) NSArray *visibleMediaApps;
@property (nonatomic) int presentingAppProcessIdentifier;
@property (nonatomic) char shouldPreventAutorotation;
@property (nonatomic) char allowsNowPlayingApplicationLaunch;
@property (nonatomic) char sortByIsVideoRoute;
@property (nonatomic) char useGenericDevicesIconInHeader;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) double preferredWidth;
@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSMutableArray *customRows;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

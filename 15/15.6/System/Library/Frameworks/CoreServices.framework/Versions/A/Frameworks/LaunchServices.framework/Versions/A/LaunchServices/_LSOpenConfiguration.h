@class NSDictionary, NSURL, UISClickAttribution, UISPasteSharingToken, BSServiceConnectionEndpoint;

@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *frontBoardOptions;
@property (nonatomic) char ignoreOpenStrategy;
@property (nonatomic) char ignoreAppLinkEnabledProperty;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic, getter=isSensitive) char sensitive;
@property (nonatomic) char allowURLOverrides;
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

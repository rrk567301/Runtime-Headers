@interface MNCommuteRouteSetInternalNotificationInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ bannerID;
    void /* unknown type, empty encoding */ eventInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

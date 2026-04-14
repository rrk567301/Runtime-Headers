@class NSSet, _TtC14ScreenTimeCore13AlwaysAllowed, NSString, _TtC14ScreenTimeCore8Downtime;

@interface ScreenTimeCore.UserSettings : NSObject <NSSecureCoding> {
    void /* function */ appLimits;
    void /* function */ pin;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _TtC14ScreenTimeCore13AlwaysAllowed *alwaysAllowed;
@property (nonatomic, readonly) NSSet *appLimits;
@property (nonatomic, readonly) BOOL appLimitsEnabled;
@property (nonatomic, readonly) _TtC14ScreenTimeCore8Downtime *downtime;
@property (nonatomic, readonly) NSString *pin;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)addWithAppLimit:(id)a0;
- (id)addWithAppLimits:(id)a0;
- (id)initWithAlwaysAllowed:(id)a0 appLimits:(id)a1 appLimitsEnabled:(BOOL)a2 downtime:(id)a3 pin:(id)a4;
- (id)removeWithAppLimit:(id)a0;
- (id)removeWithAppLimits:(id)a0;
- (id)setWithAlwaysAllowed:(id)a0;
- (id)setWithAppLimitsEnabled:(BOOL)a0;
- (id)setWithDowntime:(id)a0;
- (id)setWithPin:(id)a0;

@end

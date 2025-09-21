@class NSSet, NSString;

@interface ScreenTimeCore.UserSettings : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ appLimits;
    void /* unknown type, empty encoding */ pin;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ alwaysAllowed;
@property (nonatomic, readonly) NSSet *appLimits;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appLimitsEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ downtime;
@property (nonatomic, readonly) NSString *pin;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)addWithAppLimit:(id)a0;
- (id)addWithAppLimits:(id)a0;
- (id)initWithAlwaysAllowed:(id)a0 appLimits:(id)a1 appLimitsEnabled:(char)a2 downtime:(id)a3 pin:(id)a4;
- (id)removeWithAppLimit:(id)a0;
- (id)removeWithAppLimits:(id)a0;
- (id)setWithAlwaysAllowed:(id)a0;
- (id)setWithAppLimitsEnabled:(char)a0;
- (id)setWithDowntime:(id)a0;
- (id)setWithPin:(id)a0;

@end

@class NSString;

@interface PegasusConfiguration.ConfigInternal : NSObject <PegasusConfiguration.Config> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ userAgent;
    void /* unknown type, empty encoding */ clientName;
    void /* unknown type, empty encoding */ userDefaults;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) char isEnabled;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) char isExpired;
@property (nonatomic, readonly) NSString *searchURLString;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (char)configBoolForKey:(id)a0;
- (id)findConfigForUserAgent:(id)a0;
- (id)rawConfig;
- (id)valueForKey:(id)a0 ofType:(Class)a1;
- (id)valueForKey:(id)a0 shouldConsiderOverrides:(char)a1;

@end

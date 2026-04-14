@class NSUUID, NSSet;

@interface ScreenTimeCore.AppLimit : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ apps;
    void /* function */ categories;
    void /* function */ websites;
    void /* function */ allowedTimes;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSSet *apps;
@property (nonatomic, readonly) NSSet *categories;
@property (nonatomic, readonly) NSSet *websites;
@property (nonatomic, readonly) BOOL blockAtLimit;
@property (nonatomic, readonly) NSSet *allowedTimes;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)setWithEnabled:(BOOL)a0;
- (id)addWithWebsite:(id)a0;
- (id)removeWithApps:(id)a0;
- (id)addWithAllowedTime:(id)a0;
- (id)addWithAllowedTimes:(id)a0;
- (id)addWithApp:(id)a0;
- (id)addWithApps:(id)a0;
- (id)addWithWebsites:(id)a0;
- (id)initWithIdentifier:(id)a0 enabled:(BOOL)a1 apps:(id)a2 categories:(id)a3 websites:(id)a4 blockAtLimit:(BOOL)a5 allowedTimes:(id)a6;
- (id)removeWithAllowedTime:(id)a0;
- (id)removeWithAllowedTimes:(id)a0;
- (id)removeWithApp:(id)a0;
- (id)removeWithWebsite:(id)a0;
- (id)removeWithWebsites:(id)a0;
- (id)setWithBlockAtLimit:(BOOL)a0;

@end

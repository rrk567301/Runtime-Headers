@interface Navigation.CommuteRouteRequestParameters : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ purpose;
    void /* unknown type, empty encoding */ waypoints;
    void /* unknown type, empty encoding */ isEnroute;
    void /* unknown type, empty encoding */ predictedEntryDate;
    void /* unknown type, empty encoding */ predictedExitDate;
    void /* unknown type, empty encoding */ requireFamiliarRoute;
    void /* unknown type, empty encoding */ cacheOptions;
    void /* unknown type, empty encoding */ internalInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

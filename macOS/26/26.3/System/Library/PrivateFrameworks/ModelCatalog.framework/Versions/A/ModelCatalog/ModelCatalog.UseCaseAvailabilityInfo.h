@class NSString;

@interface ModelCatalog.UseCaseAvailabilityInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resourcesReady;
    void /* unknown type, empty encoding */ enoughStorage;
    void /* unknown type, empty encoding */ diskSpaceRequired;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

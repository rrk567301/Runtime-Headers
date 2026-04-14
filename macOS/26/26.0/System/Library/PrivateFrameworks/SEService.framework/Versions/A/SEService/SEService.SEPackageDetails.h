@class NSString;

@interface SEService.SEPackageDetails : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ packageLoaded;
    void /* unknown type, empty encoding */ containers;
    void /* unknown type, empty encoding */ instances;
    void /* unknown type, empty encoding */ type;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

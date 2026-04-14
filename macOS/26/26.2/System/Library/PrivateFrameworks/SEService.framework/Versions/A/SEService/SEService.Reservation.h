@class NSString;

@interface SEService.Reservation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ metadata;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

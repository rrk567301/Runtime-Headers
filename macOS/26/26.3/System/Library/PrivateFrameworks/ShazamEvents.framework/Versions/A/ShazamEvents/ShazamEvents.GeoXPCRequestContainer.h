@interface ShazamEvents.GeoXPCRequestContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ payload;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSString;

@interface CoreIDVShared.IdentityImageDimension : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ scale;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

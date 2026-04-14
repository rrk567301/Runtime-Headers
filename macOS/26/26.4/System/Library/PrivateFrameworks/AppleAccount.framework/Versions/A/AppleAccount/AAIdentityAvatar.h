@class NSValue, NSData;

@interface AAIdentityAvatar : NSObject <NSSecureCoding> {
    void /* function */ imageData;
    void /* unknown type, empty encoding */ cropRect;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSValue *cropRectValue;
@property (nonatomic, readonly) NSData *imageData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

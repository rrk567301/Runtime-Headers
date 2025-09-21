@class NSValue, NSUUID, NSData;

@interface AAIdentityAvatar : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ imageData;
    void /* unknown type, empty encoding */ cropRect;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSValue *cropRectValue;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSData *imageData;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 cropRect:(id)a2;

@end

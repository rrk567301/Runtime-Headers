@class NSUUID, UTType, NSData, NSString;

@interface STKStickerRepresentation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ data;
    void /* unknown type, empty encoding */ uti;
    void /* function */ role;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, readonly) UTType *uti;
@property (nonatomic) long long byteCount;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) BOOL isPreferred;
@property (nonatomic, readonly) BOOL isAnimated;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface STKStickerAttributionInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ name;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ adamID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

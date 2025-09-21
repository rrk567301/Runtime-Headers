@class NSNumber, NSString;

@interface STKStickerAttributionInfo : NSObject <NSSecureCoding> {
    void /* function */ bundleIdentifier;
    void /* function */ name;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

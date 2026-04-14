@class NSString;

@interface SmartReplies.SRSmartRepliesCaption : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ caption;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) long long type;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCaption:(id)a0 type:(long long)a1;

@end

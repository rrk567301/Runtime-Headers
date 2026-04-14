@class SUIBSiriInAppResponse;

@interface SUIBSiriResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SUIBSiriInAppResponse *inAppResponse;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBuilder:(id /* block */)a0;
- (id)init;

@end

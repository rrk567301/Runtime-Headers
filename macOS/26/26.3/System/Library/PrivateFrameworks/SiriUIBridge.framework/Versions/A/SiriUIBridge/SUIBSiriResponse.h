@class SUIBSiriInAppResponse;

@interface SUIBSiriResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SUIBSiriInAppResponse *inAppResponse;

- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

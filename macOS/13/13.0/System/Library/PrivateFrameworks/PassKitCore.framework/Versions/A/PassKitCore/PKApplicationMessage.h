@class PKApplicationMessageContent, PKApplicationMessageRegistration;

@interface PKApplicationMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageRegistration *registration;
@property (readonly, nonatomic) PKApplicationMessageContent *content;

+ (id)createLocalWithIdentifier:(id)a0 createdDate:(id)a1 priority:(unsigned long long)a2 content:(id)a3;
+ (id)createWithRegistration:(id)a0 content:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

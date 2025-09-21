@class PKApplicationMessageContent, PKApplicationMessageRegistration;

@interface PKApplicationMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageRegistration *registration;
@property (readonly, nonatomic) PKApplicationMessageContent *content;

+ (id)createWithRegistration:(id)a0 content:(id)a1;
+ (id)createLocalWithIdentifier:(id)a0 createdDate:(id)a1 priority:(unsigned long long)a2 badge:(BOOL)a3 content:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

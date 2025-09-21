@class PKApplicationMessageGroupDescriptor, PKApplicationMessageAction, PKApplicationMessageContentDefault;

@interface PKApplicationMessageContent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageContentDefault *contentTypeDefault;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group;
@property (readonly, nonatomic) PKApplicationMessageAction *action;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

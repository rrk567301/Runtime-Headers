@class NSString, NSDateComponents;

@interface ATXTimeTrigger : NSObject <ATXTrigger>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDateComponents *timeComponents;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

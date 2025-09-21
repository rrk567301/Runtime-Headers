@class NSString;

@interface ATXTimeFeedbackOption : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) char isDestructive;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1 symbolName:(id)a2 isDestructive:(char)a3;

@end

@class NSArray;

@interface _GCHIDEventParser : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *childEventParsers;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;

@end

@class NSArray;

@interface _GCHIDEventParser : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *childEventParsers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;

@end

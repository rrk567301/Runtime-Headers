@interface RTStateModelEntryExit : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double entry_s;
@property (nonatomic) double exit_s;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntry:(double)a0 exit:(double)a1;

@end

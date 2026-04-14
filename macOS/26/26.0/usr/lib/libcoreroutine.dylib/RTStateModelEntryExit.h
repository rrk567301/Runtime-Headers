@interface RTStateModelEntryExit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double entry_s;
@property (nonatomic) double exit_s;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithEntry:(double)a0 exit:(double)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

@class NSDate;

@interface NFAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isReleased;
@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;
@property (readonly) NSDate *assertionTime;

- (id)description;
- (id)sessionID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)deassert;

@end

@class NSDate;

@interface NFAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isReleased;
@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;
@property (readonly) NSDate *assertionTime;

- (id)sessionID;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)deassert;

@end

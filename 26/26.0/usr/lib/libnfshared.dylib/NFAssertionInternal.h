@class NSString, NSDate;

@interface NFAssertionInternal : NSObject <NSSecureCoding> {
    NSString *_assertionTimeString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;
@property (readonly) NSDate *assertionTime;

- (id)sessionID;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

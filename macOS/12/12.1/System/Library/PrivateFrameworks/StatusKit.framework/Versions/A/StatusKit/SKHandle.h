@class NSString;

@interface SKHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *handleString;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isExactlyEqualToHandle:(id)a0;
- (id)initWithString:(id)a0 mergeID:(id)a1;

@end

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *validity;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *key;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

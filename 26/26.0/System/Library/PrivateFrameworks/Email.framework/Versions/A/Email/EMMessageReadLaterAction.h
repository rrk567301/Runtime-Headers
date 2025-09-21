@class NSDate;

@interface EMMessageReadLaterAction : EMMessageChangeAction

@property (readonly, nonatomic) NSDate *readLaterDate;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 readLaterDate:(id)a3;

@end

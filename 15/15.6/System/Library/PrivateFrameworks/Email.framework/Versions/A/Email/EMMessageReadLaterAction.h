@class NSDate;

@interface EMMessageReadLaterAction : EMMessageChangeAction

@property (readonly, nonatomic) NSDate *readLaterDate;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 readLaterDate:(id)a3;

@end

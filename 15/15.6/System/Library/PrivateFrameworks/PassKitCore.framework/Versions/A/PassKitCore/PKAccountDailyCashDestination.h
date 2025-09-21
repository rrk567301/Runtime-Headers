@class NSString;

@interface PKAccountDailyCashDestination : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic, getter=isCurrent) char current;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(unsigned long long)a0 isCurrent:(char)a1 localizedTitle:(id)a2 localizedSubtitle:(id)a3;

@end

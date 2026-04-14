@class NSString;

@interface WPRestrictedOpenerDomain : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long openerType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDomain:(id)a0 openerType:(long long)a1;

@end

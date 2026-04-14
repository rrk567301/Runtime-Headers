@class NSString;

@interface PKBadgeCountItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSString *title;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemType:(unsigned long long)a0 subtitle:(id)a1 count:(long long)a2;

@end

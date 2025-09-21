@class NSString, PKDiscoveryItem;

@interface PKDiscoveryShelf : NSObject <NSSecureCoding> {
    NSString *_itemIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (weak, nonatomic) PKDiscoveryItem *item;

+ (id)shelfWithDictionary:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end

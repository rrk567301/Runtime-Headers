@class NSString, PKDiscoveryItem;

@interface PKDiscoveryShelf : NSObject <NSSecureCoding> {
    NSString *_itemIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (weak, nonatomic) PKDiscoveryItem *item;

+ (id)shelfWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end

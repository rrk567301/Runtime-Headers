@class NSString, NSArray;

@interface ICQManageStoragePageInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *storageGraphFooterText;
@property (retain, nonatomic) NSArray *specifiers;
@property (retain, nonatomic) NSArray *tips;

- (id)initFromDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

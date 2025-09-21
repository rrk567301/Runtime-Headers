@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (nonatomic) char isUbiquitous;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToGroup:(id)a0;

@end

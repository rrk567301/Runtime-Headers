@class NSArray;

@interface ICQAppsSyncingToDrive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *apps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

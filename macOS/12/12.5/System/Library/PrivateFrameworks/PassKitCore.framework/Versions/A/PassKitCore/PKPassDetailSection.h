@class NSString, NSArray;

@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *insertAfterSection;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRows:(id)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;

@end

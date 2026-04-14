@class NSString, NSArray;

@interface COKeyPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSArray *components;

+ (id)createWithString:(id)a0;
+ (id)allowedCharacterSet;
+ (id)predicateWithComponents:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;

@end

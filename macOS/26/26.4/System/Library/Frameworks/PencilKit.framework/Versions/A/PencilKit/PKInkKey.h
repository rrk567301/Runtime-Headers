@class NSString;

@interface PKInkKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSString *variant;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 version:(unsigned long long)a1 variant:(id)a2;

@end

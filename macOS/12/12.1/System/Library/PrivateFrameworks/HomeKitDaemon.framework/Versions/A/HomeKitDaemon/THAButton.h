@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned long long)a0 identifier:(unsigned char)a1;

@end

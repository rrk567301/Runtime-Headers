@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0 identifier:(unsigned char)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

@interface AVCSessionABTestConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isOneToOneAuthenticationTagEnabled) char oneToOneAuthenticationTagEnabled;
@property (nonatomic, getter=isGftTLEEnabled) char gftTLEEnabled;

+ (id)createWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)dictionary;

@end

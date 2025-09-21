@interface PRAstKeywordInfo : NSObject

@property (nonatomic) long long fieldType;
@property (nonatomic) long long direction;

+ (id)infoWithFieldType:(long long)a0 direction:(long long)a1;

- (id)initWithFieldType:(long long)a0 direction:(long long)a1;

@end

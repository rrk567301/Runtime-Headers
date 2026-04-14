@class NSString;

@interface ARUserProfile : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)defaultProfile;
+ (BOOL)isGuestProfileEnabled;

- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

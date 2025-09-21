@interface SSScreenDetails : NSObject

@property (readonly, nonatomic) char isScreen;
@property (readonly, nonatomic) long long screenNumber;

- (id)initWithScreenNumber:(long long)a0 isScreen:(char)a1;

@end

@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) OADBaseStyles *baseStyles;
@property (readonly, nonatomic) OADDrawableDefaults *drawableDefaults;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)validateTheme;

@end

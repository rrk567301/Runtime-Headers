@class NSString, NSDictionary, SOAccountAliasController;

@interface SOAccountAlias : NSObject <NSCopying>

@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) SOAccountAliasController *controller;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (nonatomic) int verificationState;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSDictionary *failureInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithName:(id)a0 type:(long long)a1;
- (void)deactivate;
- (void)activate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1 controller:(id)a2;
- (id)localizedValidationFalure;
- (long long)validationErrorReason;

@end

@class BSAuditToken, NSString, BSSettings, NSError;

@interface BSActionResponse : NSObject <BSXPCAutoCoding, NSCopying, BSSettingDescriptionProvider, BSDescriptionProviding>

@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)response;
+ (void)initialize;
+ (id)responseForError:(id)a0;
+ (id)responseWithInfo:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)init;
- (id)succinctDescription;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)awakeFromCoder;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)membersForCoder;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class BSAuditToken, NSString, BSSettings, NSError;

@interface BSActionResponse : NSObject <BSXPCAutoCoding, NSCopying, BSSettingDescriptionProvider, BSDescriptionProviding>

@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)response;
+ (id)responseForError:(id)a0;
+ (id)responseWithInfo:(id)a0;

- (id)membersForCoder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescription;
- (id)init;
- (void)awakeFromCoder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end

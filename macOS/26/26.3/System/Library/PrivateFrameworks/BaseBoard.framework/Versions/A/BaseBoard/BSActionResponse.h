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

- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)membersForCoder;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)awakeFromCoder;
- (BOOL)isEqual:(id)a0;

@end

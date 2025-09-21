@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char firstEntity;
@property (retain, nonatomic) SAUIDecoratedText *playDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)competingTeamPlayDetailItem;
+ (id)competingTeamPlayDetailItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

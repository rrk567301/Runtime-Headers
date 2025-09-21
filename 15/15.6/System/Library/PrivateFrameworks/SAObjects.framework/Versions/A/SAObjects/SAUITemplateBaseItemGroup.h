@class NSArray, SAUITemplateEdgeInsets, NSString;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *templateItems;
@property (copy, nonatomic) NSArray *communicationOptions;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) char hasPriorityLayout;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) char shouldBeOffscreenInPartial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

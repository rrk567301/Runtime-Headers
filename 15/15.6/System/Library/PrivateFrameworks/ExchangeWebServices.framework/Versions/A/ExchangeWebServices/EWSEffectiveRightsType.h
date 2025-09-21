@class NSString;

@interface EWSEffectiveRightsType : NSObject <XSDefinitionProvider>

@property (nonatomic) char CreateAssociated;
@property (nonatomic) char CreateContents;
@property (nonatomic) char CreateHierarchy;
@property (nonatomic) char Delete;
@property (nonatomic) char Modify;
@property (nonatomic) char Read;
@property (nonatomic) char ViewPrivateItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end

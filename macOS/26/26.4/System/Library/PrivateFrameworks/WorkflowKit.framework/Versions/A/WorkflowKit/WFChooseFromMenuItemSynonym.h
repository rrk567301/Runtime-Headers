@class NSUUID, WFVariableString;

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) WFVariableString *synonym;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)a0 synonym:(id)a1;

@end

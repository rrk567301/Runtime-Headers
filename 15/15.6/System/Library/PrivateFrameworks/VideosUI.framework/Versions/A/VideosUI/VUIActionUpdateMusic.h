@class NSString;

@interface VUIActionUpdateMusic : VUIAction

@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) char isExplicit;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (char)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end

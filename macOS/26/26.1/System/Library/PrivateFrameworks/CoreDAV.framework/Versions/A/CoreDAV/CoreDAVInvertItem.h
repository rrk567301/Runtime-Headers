@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end

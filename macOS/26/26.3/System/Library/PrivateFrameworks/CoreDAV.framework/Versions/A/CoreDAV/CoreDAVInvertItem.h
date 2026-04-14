@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

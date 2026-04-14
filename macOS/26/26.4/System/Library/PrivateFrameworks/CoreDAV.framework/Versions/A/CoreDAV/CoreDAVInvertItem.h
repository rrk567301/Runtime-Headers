@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

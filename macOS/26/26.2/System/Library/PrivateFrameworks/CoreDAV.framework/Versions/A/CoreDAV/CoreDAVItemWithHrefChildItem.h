@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

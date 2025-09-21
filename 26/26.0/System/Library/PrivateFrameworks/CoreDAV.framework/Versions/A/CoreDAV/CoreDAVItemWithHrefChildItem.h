@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (id)description;
- (void)write:(id)a0;
- (void).cxx_destruct;

@end

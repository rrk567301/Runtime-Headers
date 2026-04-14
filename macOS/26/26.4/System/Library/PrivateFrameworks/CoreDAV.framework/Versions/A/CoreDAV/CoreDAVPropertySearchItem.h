@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *prop;
@property (retain, nonatomic) NSString *match;
@property (retain, nonatomic) NSString *matchTypeAttribute;

- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithSearchPropertyNameSpace:(id)a0 andName:(id)a1;

@end

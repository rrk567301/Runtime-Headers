@class NSString, NSMutableSet;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedParameters;
@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;

- (id)copyParseRules;
- (void)parserFoundAttributes:(id)a0;
- (void).cxx_destruct;
- (void)addChangedParameter:(id)a0;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;

@end

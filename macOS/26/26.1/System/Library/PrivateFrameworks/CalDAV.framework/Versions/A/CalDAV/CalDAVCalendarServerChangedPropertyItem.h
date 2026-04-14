@class NSString, NSMutableSet;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem

@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;
@property (retain, nonatomic) NSMutableSet *changedParameters;

- (void)parserFoundAttributes:(id)a0;
- (id)copyParseRules;
- (void).cxx_destruct;
- (void)addChangedParameter:(id)a0;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;

@end

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem

@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *colorString;

- (void)write:(id)a0;
- (void)parserFoundAttributes:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

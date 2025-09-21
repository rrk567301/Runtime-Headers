@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem

@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *colorString;

- (id)init;
- (void)write:(id)a0;
- (void)parserFoundAttributes:(id)a0;
- (void).cxx_destruct;

@end

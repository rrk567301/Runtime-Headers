@class NSArray, OSAScriptView, NSMutableString, NSMutableArray;

@interface OSAScriptAssistantDataSource : NSObject {
    OSAScriptView *_scriptView;
    NSMutableArray *_strategies;
    NSArray *_items;
    NSMutableString *_infoString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastParseRange;
}

+ (id)localImage;
+ (id)scriptImage;
+ (id)globalImage;
+ (id)propertyImage;
+ (id)enumImage;
+ (id)terminologyImage;
+ (id)commandImage;
+ (id)eventImage;
+ (id)keywordImage;
+ (id)smallScriptImage;
+ (id)smallGlobalImage;
+ (id)smallPropertyImage;
+ (id)smallEnumImage;
+ (id)smallTerminologyImage;
+ (id)smallCommandImage;
+ (id)smallEventImage;
+ (id)smallLocalImage;
+ (id)smallKeywordImage;

- (void)dealloc;
- (long long)count;
- (id)items;
- (void)setItems:(id)a0;
- (void)updateList;
- (id)strategies;
- (id)infoString;
- (void)setInfoString:(id)a0;
- (id)initWithScriptView:(id)a0;
- (void)purgeList;
- (id)scriptView;
- (BOOL)isPopupTrigger:(unsigned short)a0;
- (BOOL)shouldUpdateList;
- (void)setScriptView:(id)a0;
- (void)setStrategies:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastParseRange;
- (void)setLastParseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end

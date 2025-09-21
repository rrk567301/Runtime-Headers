@class NSString, NSMutableArray;

@interface CCHTMLElement : NSObject {
    NSMutableArray *_children;
    BOOL _nested;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *attributes;

+ (id)element;
+ (id)elementWithText:(id)a0;
+ (id)elementWithTag:(id)a0;
+ (id)hyperlink:(id)a0 text:(id)a1;
+ (id)elementWithRawString:(id)a0;
+ (id)elementWithTag:(id)a0 attributes:(id)a1;
+ (id)elementWithTag:(id)a0 attributes:(id)a1 nested:(BOOL)a2;
+ (id)elementWithTag:(id)a0 className:(id)a1;
+ (id)elementWithText:(id)a0 nested:(BOOL)a1;
+ (id)indentation:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)collapse;
- (id)collapse:(int)a0;
- (void)append:(id)a0;
- (void)appendText:(id)a0;
- (void)appendHyperlink:(id)a0 text:(id)a1;
- (void)appendImage:(id)a0 caption:(id)a1 width:(int)a2;
- (void)appendImage:(id)a0 captions:(id)a1 width:(int)a2;
- (void)appendNewLine;
- (void)appendTableWithHeader:(id)a0 rows:(id)a1;
- (id)appendTag:(id)a0;
- (id)appendTag:(id)a0 tagId:(id)a1;
- (void)appendText:(SEL)a0 color:(id)a1;
- (void)appendText:(id)a0 nested:(BOOL)a1;
- (id)init:(id)a0 attributes:(id)a1 nested:(BOOL)a2 type:(long long)a3;
- (id)init:(id)a0 type:(long long)a1;

@end

@class NSString;

@interface OSAPropertyElement : OSAScriptElement {
    NSString *_value;
}

+ (id)elementWithProperty:(id)a0 value:(id)a1;

- (void)setProperty:(id)a0;
- (id)property;
- (void)setValue:(id)a0;
- (id)value;
- (void)dealloc;
- (id)title;
- (id)initWithProperty:(id)a0 value:(id)a1;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned long long)a1;

@end

@class NSString;

@interface XQueryString : NSString <XQueryAtomicType> {
    long long _type;
    NSString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringWithString:(id)a0;
+ (char)isName:(id)a0;
+ (id)nameWithString:(id)a0;
+ (id)entityWithString:(id)a0;
+ (id)idRefWithString:(id)a0;
+ (id)idWithString:(id)a0;
+ (char)isEntity:(id)a0;
+ (char)isID:(id)a0;
+ (char)isIDRef:(id)a0;
+ (char)isLanguage:(id)a0;
+ (char)isNCName:(id)a0;
+ (char)isNMToken:(id)a0;
+ (char)isNormalizedString:(id)a0;
+ (char)isToken:(id)a0;
+ (id)languageWithString:(id)a0;
+ (id)ncNameWithString:(id)a0;
+ (id)nmTokenWithString:(id)a0;
+ (id)normalizedStringWithString:(id)a0;
+ (id)tokenWithString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0 type:(long long)a1;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;

@end

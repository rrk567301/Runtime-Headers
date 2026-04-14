@class NSString, NSLocale;

@interface WLKLocale : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

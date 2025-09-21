@class NSString, NSDictionary;

@interface _LTTranslationRange : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) char shouldTranslate;
@property (copy, nonatomic) NSDictionary *metaInfo;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 text:(id)a1 shouldTranslate:(char)a2;

@end

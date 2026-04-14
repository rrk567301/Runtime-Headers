@class NSString;

@interface TCFontName : NSObject

@property (readonly, nonatomic) NSString *styleName;
@property (readonly, nonatomic) NSString *fullName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)equivalentDictionary;
- (id)initWithStyleName:(id)a0 fullName:(id)a1;

@end

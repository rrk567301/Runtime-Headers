@class NSString, NSURL;

@interface PKApplyFooterContentLink : NSObject <NSCopying>

@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *termsIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

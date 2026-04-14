@class NSString, NSURL;

@interface PKApplyFooterContentLink : NSObject <NSCopying>

@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *analyticsIdentifier;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

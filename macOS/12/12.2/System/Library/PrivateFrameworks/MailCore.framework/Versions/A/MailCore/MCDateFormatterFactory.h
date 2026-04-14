@interface MCDateFormatterFactory : NSObject

+ (id)newCommonInternetMessageDateFormatters;
+ (id)newIMAPDateFormatter;
+ (id)newUncommonInternetMessageDateFormatters;
+ (id)newInternetMessageDateFormatter;

@end

@interface MCDateFormatterFactory : NSObject

+ (id)newCommonInternetMessageDateFormatters;
+ (id)newIMAPDateFormatter;
+ (id)newInternetMessageDateFormatter;
+ (id)newUncommonInternetMessageDateFormatters;

@end

@interface ICNFMCDateFormatterFactory : NSObject

+ (id)newCommonInternetMessageDateFormatters;
+ (id)newIMAPDateFormatter;
+ (id)newUncommonInternetMessageDateFormatters;
+ (id)newInternetMessageDateFormatter;

@end

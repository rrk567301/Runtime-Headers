@interface ICNFMCDateParser : NSObject

+ (id)dateFromInternetMessageDateString:(id)a0;
+ (id)dateFromIMAPDateString:(id)a0;
+ (id)_dateFromString:(id)a0 imapFirst:(BOOL)a1;
+ (id)_imapDateFormatter;
+ (id)_dateStringByStrippingCommentsFromString:(id)a0;
+ (id)_commonDateFormatters;
+ (id)_fallbackDateFormaters;

@end

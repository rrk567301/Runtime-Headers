@interface WFContentSniffer : NSObject

+ (id)MIMETypeForData:(id)a0 andString:(id)a1;
+ (char)MIMETypeIsHTMLOrText:(id)a0;
+ (char)isHTML:(id)a0;
+ (char)isWord:(id)a0;
+ (id)MIMETypeForData:(id)a0;
+ (id)MIMETypeForString:(id)a0;
+ (char)isJPEG:(id)a0;
+ (char)isGIF:(id)a0;
+ (char)isOctetStream:(id)a0;
+ (char)isPDF:(id)a0;
+ (char)isPNG:(id)a0;
+ (char)isSWF:(id)a0;
+ (char)isXHTML:(id)a0;
+ (char)isXML:(id)a0;

@end

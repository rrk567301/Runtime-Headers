@interface EDDataDetectionUtilities : NSObject

+ (id)log;
+ (id)_detectOneTimeCodeWithDataDetectors:(id)a0;
+ (id)extractOneTimeCodeFromHTML:(id)a0 withSubject:(id)a1;
+ (id)extractOneTimeCodeFromPlainText:(id)a0 withSubject:(id)a1;
+ (id)extractOneTimeCodeFromSubject:(id)a0;
+ (BOOL)isRealWord:(id)a0;

@end

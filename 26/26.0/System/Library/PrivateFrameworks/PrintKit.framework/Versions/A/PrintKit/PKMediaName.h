@class NSString;

@interface PKMediaName : NSObject

@property (retain) NSString *mediaName;
@property (retain) NSString *mediaClass;
@property (retain) NSString *baseName;
@property (retain) NSString *widthStr;
@property double widthInUnits;
@property double heightInUnits;
@property long long units;
@property double conversionFactor;
@property (readonly) BOOL isRoll;
@property (readonly) double width;
@property (readonly) double height;
@property (readonly, retain) NSString *unitStr;

+ (id)pkMediaNameWithString:(id)a0;

- (void)dealloc;
- (double)width;
- (id)initWithString:(id)a0;
- (double)height;
- (void).cxx_destruct;
- (id)unitStr;
- (void)parseMediaName:(id)a0;
- (BOOL)isRoll;

@end

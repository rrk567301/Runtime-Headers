@interface PFISO6709Parser : NSObject

+ (char)parseISO6709String:(id)a0 outLatitude:(double *)a1 outLongitude:(double *)a2;
+ (char)parseISO6709String:(id)a0 outLatitudeNumber:(id *)a1 outLongitudeNumber:(id *)a2;

@end

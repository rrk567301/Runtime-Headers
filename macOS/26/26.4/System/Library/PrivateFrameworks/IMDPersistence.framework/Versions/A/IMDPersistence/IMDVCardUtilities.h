@interface IMDVCardUtilities : NSObject

+ (id)contactsForVCardAtPath:(id)a0;
+ (void)updateAttributes:(id)a0 withAddressFromContact:(id)a1;
+ (BOOL)vCardCoordinateForMapURL:(id)a0 outLatitude:(double *)a1 outLongitude:(double *)a2;
+ (id)vCardMapURLForContact:(id)a0;
+ (id)vCardNameForContact:(id)a0;

@end

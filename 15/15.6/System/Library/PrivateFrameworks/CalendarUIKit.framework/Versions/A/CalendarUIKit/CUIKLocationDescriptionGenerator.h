@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 conferenceURLIsBroadcast:(char)a4 options:(unsigned long long)a5;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1 incomplete:(char *)a2 leadingImageName:(id *)a3;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 conferenceURLIsBroadcast:(char)a4;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)conferenceStringForURL:(id)a0 conferenceURLIsBroadcast:(char)a1 options:(unsigned long long)a2;
+ (id)conferenceStringForURL:(id)a0 conferenceURLIsBroadcast:(char)a1 options:(unsigned long long)a2 incomplete:(char *)a3 leadingImageName:(id *)a4;
+ (id)labelForLocation:(id)a0;
+ (id)locationStringForEvent:(id)a0;

@end

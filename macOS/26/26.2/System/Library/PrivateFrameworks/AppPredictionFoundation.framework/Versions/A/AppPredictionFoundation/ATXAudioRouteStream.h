@class NSString;

@interface ATXAudioRouteStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)atxAudioRouteTypeFromBMAudioRouteType:(int)a0;

@end

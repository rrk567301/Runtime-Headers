@class NSString, NSDate;

@interface GEOCountryConfigFetchGeoIPReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

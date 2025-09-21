@class NSString, NSDate;

@interface GEOLocationShiftingCacheItem : NSObject <GEOXPCSerializable>

@property (retain, nonatomic) NSDate *addDate;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double radiusMeters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (void).cxx_destruct;

@end

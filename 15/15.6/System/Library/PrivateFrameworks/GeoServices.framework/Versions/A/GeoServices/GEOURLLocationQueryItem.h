@class GEOMapItemIdentifier, NSString;

@interface GEOURLLocationQueryItem : NSObject

@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) char isCurrentLocation;
@property (retain, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *resolvedLocation;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char hasMapItemIdentifier;

+ (id)locationQueryItemsWithMapItemHandles:(id)a0;
+ (id)locationQueryItemsWithValues:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithValue:(id)a0;
- (id)initWithQueryItemValue:(id)a0;

@end

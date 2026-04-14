@class GEOMapItemIdentifier, NSString;

@interface GEOURLLocationQueryItem : NSObject

@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *resolvedLocation;

+ (id)locationQueryItemsWithArray:(id)a0;
+ (id)locationQueryItemsWithValue:(id)a0;
+ (id)serializedJsonStringFromLocationQueryItems:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithQueryItemValue:(id)a0;

@end

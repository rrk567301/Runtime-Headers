@interface RS3DMarker : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ corners[4]; } quad;
@property (nonatomic) float score;
@property (nonatomic) void /* unknown type, empty encoding */ normal;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end

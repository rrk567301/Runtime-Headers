@class NSArray;

@interface RSMarkerSignal : NSObject {
    NSArray *_markers;
}

@property (readonly, nonatomic) NSArray *markers;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;

@end

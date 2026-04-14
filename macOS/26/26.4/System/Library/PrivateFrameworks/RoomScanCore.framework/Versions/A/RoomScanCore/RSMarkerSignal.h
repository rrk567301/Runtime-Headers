@class NSArray;

@interface RSMarkerSignal : NSObject {
    NSArray *_markers;
}

@property (readonly, nonatomic) NSArray *markers;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;

@end

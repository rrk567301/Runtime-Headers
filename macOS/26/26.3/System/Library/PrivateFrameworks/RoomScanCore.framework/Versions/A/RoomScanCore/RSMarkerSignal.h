@class NSArray;

@interface RSMarkerSignal : NSObject {
    NSArray *_markers;
}

@property (readonly, nonatomic) NSArray *markers;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

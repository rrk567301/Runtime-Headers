@class NSMutableDictionary;

@interface AFDataStore : NSObject {
    NSMutableDictionary *_entries;
}

- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)init;
- (id)imageDataForKey:(id)a0;
- (void)setImageData:(id)a0 forKey:(id)a1;

@end

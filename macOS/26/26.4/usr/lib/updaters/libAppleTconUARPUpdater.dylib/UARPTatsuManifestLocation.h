@class UARPComponentTag;

@interface UARPTatsuManifestLocation : NSObject

@property (readonly) BOOL ftabSubfile;
@property (readonly) BOOL metaData;
@property (readonly) UARPComponentTag *componentTag;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithComponentName:(id)a0 ftabSubfile:(BOOL)a1 metaData:(BOOL)a2;

@end

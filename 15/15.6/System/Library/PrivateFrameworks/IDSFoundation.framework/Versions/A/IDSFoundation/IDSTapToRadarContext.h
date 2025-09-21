@class NSDictionary;

@interface IDSTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)_isValidClassification:(id)a0;
- (char)_isValidReproducibility:(id)a0;
- (id)getTapToRadarURL;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1;

@end

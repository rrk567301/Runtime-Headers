@class NSString, GEOPBTransitArtwork, GEOComposedString;

@interface MNIPCTransitAlightMessage : MNIPCMessage

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long stopIndex;
@property (nonatomic) unsigned long long stepIndex;
@property (copy, nonatomic) GEOPBTransitArtwork *artwork;
@property (retain, nonatomic) GEOComposedString *title;
@property (retain, nonatomic) GEOComposedString *detail;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;

@end

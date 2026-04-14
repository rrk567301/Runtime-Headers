@class NSURL, FCHLSKey, FCHLSMap;

@interface FCHLSSegment : NSObject {
    FCHLSMap *_map;
    NSURL *_url;
    double _duration;
    FCHLSKey *_key;
}

- (void).cxx_destruct;
- (id)description;

@end

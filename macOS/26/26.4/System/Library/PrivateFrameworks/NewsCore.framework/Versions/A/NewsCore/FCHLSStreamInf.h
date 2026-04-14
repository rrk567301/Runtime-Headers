@class NSURL, NSString;

@interface FCHLSStreamInf : NSObject {
    NSURL *_url;
    unsigned long long _bandwidth;
    unsigned long long _averageBandwidth;
    NSString *_codecs;
    NSString *_audio;
}

- (void).cxx_destruct;
- (id)description;

@end

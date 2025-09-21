@class NSString;

@interface QOSConfigInternal : NSObject {
    void /* function */ locale;
    void /* unknown type, empty encoding */ issuesUrl;
    void /* unknown type, empty encoding */ locationUrl;
    void /* unknown type, empty encoding */ issueRefreshFrequencyInSecs;
    void /* unknown type, empty encoding */ locationRefreshFrequencyInSecs;
    void /* unknown type, empty encoding */ syncStartDelayOffsetInSecs;
}

@property (nonatomic, readonly) long long appTarget;
@property (nonatomic, readonly) NSString *locale;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppTarget:(long long)a0 locale:(id)a1;

@end

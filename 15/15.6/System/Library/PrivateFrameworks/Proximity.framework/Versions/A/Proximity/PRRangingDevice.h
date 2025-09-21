@class NSDictionary;

@interface PRRangingDevice : NSObject {
    NSDictionary *_clientInfo;
}

@property (readonly, copy) NSDictionary *clientInfo;

+ (char)isSupported;

- (id)init;
- (void).cxx_destruct;

@end

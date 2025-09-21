@class NSString, NSDictionary, NSURL, NSDate, NSArray;

@interface CKLTrafficLogMessage : NSObject {
    void /* function */ uuid;
    void /* unknown type, empty encoding */ requestTime;
    void /* function */ requestMethod;
    void /* unknown type, empty encoding */ requestURL;
    void /* function */ requestHeaders;
    void /* function */ requestObjects;
    void /* unknown type, empty encoding */ responseTime;
    void /* function */ responseHeaders;
    void /* function */ responseObjects;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSDate *requestTime;
@property (nonatomic, readonly) NSString *requestMethod;
@property (nonatomic, readonly) NSURL *requestURL;
@property (nonatomic, readonly) NSDictionary *requestHeaders;
@property (nonatomic, readonly) long long bodyStreamResetCount;
@property (nonatomic, readonly) NSArray *requestObjects;
@property (nonatomic, readonly) long long responseStatus;
@property (nonatomic, readonly) NSDate *responseTime;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, readonly) NSArray *responseObjects;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUuid:(id)a0 requestMetadata:(id)a1 requestObjects:(id)a2 bodyStreamResetCount:(long long)a3 responseMetadata:(id)a4 responseObjects:(id)a5;

@end

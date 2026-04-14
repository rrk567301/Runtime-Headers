@class NSString;

@interface ISS_AYEvent : NSObject {
    NSString *_domain;
    int _code;
    id _info;
}

+ (id)eventWithDomain:(id)a0 eventCode:(int)a1 userInfo:(id)a2;

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)domain;
- (int)code;
- (id)userInfo;
- (id)initWithDomain:(id)a0 eventCode:(int)a1 userInfo:(id)a2;

@end

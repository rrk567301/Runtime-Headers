@class NSString;

@interface ISS_AYEvent : NSObject {
    NSString *_domain;
    int _code;
    id _info;
}

+ (id)eventWithDomain:(id)a0 eventCode:(int)a1 userInfo:(id)a2;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)userInfo;
- (int)code;
- (id)domain;
- (id)initWithDomain:(id)a0 eventCode:(int)a1 userInfo:(id)a2;

@end

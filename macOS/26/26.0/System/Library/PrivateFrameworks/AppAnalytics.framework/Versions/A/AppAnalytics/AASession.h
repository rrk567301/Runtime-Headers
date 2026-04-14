@class NSString, NSDictionary, NSDate;

@interface AASession : NSObject {
    void /* function */ identifier;
    void /* function */ name;
    void /* unknown type, empty encoding */ startDate;
    void /* function */ sessionData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDictionary *sessionData;

- (id)init;
- (void).cxx_destruct;

@end

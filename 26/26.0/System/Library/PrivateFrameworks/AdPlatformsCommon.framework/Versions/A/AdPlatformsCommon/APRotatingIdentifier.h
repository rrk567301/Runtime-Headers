@class NSString, NSDate;

@interface APRotatingIdentifier : NSObject {
    void /* function */ value;
    void /* unknown type, empty encoding */ expirationDate;
    void /* function */ processId;
}

@property (nonatomic, copy) NSString *value;
@property (nonatomic) long long type;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *processId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 type:(long long)a1 source:(long long)a2 expirationDate:(id)a3 processId:(id)a4;

@end

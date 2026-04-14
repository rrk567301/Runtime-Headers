@class NSString;

@interface AAUserIDResetFlag : NSObject {
    void /* unknown type, empty encoding */ userIDResetFlag;
}

@property (nonatomic, readonly) NSString *suiteName;
@property (nonatomic, readonly) NSString *userDataIDsResetKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuiteName:(id)a0;
- (id)initWithSuiteName:(id)a0 userDataIDsResetKey:(id)a1;

@end

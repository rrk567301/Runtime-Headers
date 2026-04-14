@class NSString, NSMutableDictionary, NSDate;

@interface AMSMockBagBuilder : NSObject

@property (retain) NSMutableDictionary *data;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

- (void)unionBagKeySet:(id)a0;
- (id)initWithData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addBagKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
- (id)createMockBag;

@end

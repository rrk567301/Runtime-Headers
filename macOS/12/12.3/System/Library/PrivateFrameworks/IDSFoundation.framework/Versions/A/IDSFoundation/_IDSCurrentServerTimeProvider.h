@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (id)init;
- (void).cxx_destruct;
- (double)serverTime;
- (BOOL)isAccurate;

@end

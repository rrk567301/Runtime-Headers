@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (BOOL)isAccurate;
- (id)init;
- (unsigned long long)serverTimeInNanoSeconds;
- (void).cxx_destruct;

@end

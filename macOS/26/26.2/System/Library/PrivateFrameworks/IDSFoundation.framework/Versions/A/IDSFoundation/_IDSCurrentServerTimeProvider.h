@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (unsigned long long)serverTimeInNanoSeconds;
- (BOOL)isAccurate;
- (void).cxx_destruct;
- (id)init;

@end

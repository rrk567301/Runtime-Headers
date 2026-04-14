@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (void).cxx_destruct;
- (unsigned long long)serverTimeInNanoSeconds;
- (BOOL)isAccurate;
- (id)init;

@end

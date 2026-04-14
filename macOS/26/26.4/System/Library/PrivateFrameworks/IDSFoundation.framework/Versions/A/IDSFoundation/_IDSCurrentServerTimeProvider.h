@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (unsigned long long)serverTimeInNanoSeconds;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAccurate;

@end

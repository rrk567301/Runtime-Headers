@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (BOOL)isAccurate;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)serverTimeInNanoSeconds;

@end

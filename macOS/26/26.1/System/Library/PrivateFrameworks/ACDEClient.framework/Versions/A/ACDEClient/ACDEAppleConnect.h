@class NSString;
@protocol ACDEAppleConnectDelegate, ACDEAppleConnectPrivate;

@interface ACDEAppleConnect : NSObject <ACDEAppleConnect>

@property (readonly) id<ACDEAppleConnectPrivate> private;
@property id<ACDEAppleConnectDelegate> delegate;
@property (nonatomic) int logLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (id)version;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (void)setupComponents;
- (void)authenticate:(id)a0 completion:(id /* block */)a1;
- (void)authenticate:(id)a0 withPassword:(id)a1;

@end

@class NSString, NSMutableArray;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding> {
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    BOOL _isSecondaryRouter;
    id<NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isRouterKey;

- (id)identifier;
- (int)displayMode;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setDisplayMode:(int)a0;
- (void)addKeyMask:(unsigned int)a0;
- (void)addModifierMask:(unsigned int)a0;
- (void)addSpacebarKeyMask;
- (int)displayToken;
- (BOOL)getRouterIndex:(long long *)a0 token:(long long *)a1 location:(long long *)a2 appToken:(id *)a3;
- (BOOL)isSecondaryRouter;
- (id)keyMasks;
- (void)setDisplayToken:(int)a0;
- (void)setIsSecondaryRouter:(BOOL)a0;
- (void)setRouterIndex:(long long)a0 token:(long long)a1 location:(long long)a2 appToken:(id)a3;

@end

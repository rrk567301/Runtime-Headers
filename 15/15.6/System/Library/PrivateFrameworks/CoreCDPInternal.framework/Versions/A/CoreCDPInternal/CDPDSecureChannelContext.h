@class CDPContext;
@protocol CDPSecureChannelProxy, CDPDCircleProxy, CDPKeychainCircleProxy;

@interface CDPDSecureChannelContext : NSObject

@property (retain, nonatomic) id<CDPKeychainCircleProxy> keychainCircleProxy;
@property (retain, nonatomic) id<CDPSecureChannelProxy> secureChannelProxy;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly, nonatomic) CDPContext *context;
@property (nonatomic) unsigned long long secureChannelType;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 circleProxy:(id)a1;
- (id)initWithContext:(id)a0 channel:(id)a1 dataProvider:(id)a2 circleProxy:(id)a3;
- (char)initialize:(id *)a0;
- (char)initializePiggybackingChannel:(id *)a0;
- (void)initializeTTSUChannel;
- (void)setFlowIDFromRequester:(id)a0;

@end

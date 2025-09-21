@class TSDTextureSet, NSDictionary, NSLock;

@interface TSDMagicMoveAnimationMatch : NSObject <NSSecureCoding> {
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    char _isUsingMorphTexture;
    char _didUseMorphTexture;
    char _hasBeenTornDown;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) TSDTextureSet *outgoingTexture;
@property (retain, nonatomic) TSDTextureSet *incomingTexture;
@property (nonatomic) char isMorphMatch;
@property (readonly, nonatomic) char isMatched;
@property (nonatomic) char isTextStyleIdenticalExceptSize;
@property (nonatomic) char shouldDisableTextMorphing;
@property (nonatomic) long long matchType;
@property (retain, nonatomic) NSDictionary *outgoingTextureActionBuildFinalAttributes;
@property (nonatomic) char shouldTearDownTextures;

+ (unsigned long long)magicMoveMorphTexturesPerSecond;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)teardown;
- (void)addMorphTexture:(id)a0;
- (void)clearMorphTexture;
- (id)initWithMatchType:(long long)a0 outgoingTexture:(id)a1 incomingTexture:(id)a2;
- (id)lockCurrentMorphTexture;
- (void)unlockCurrentMorphTexture;

@end

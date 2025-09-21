@class NSArray, FPActionOperationLocator;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) FPActionOperationLocator *targetFolder;
@property (retain, nonatomic) NSArray *rootFilenames;
@property (nonatomic) unsigned long long lastUsedDatePolicy;
@property (nonatomic) char shouldBounce;
@property (nonatomic) char byCopy;
@property (readonly, nonatomic) char byMoving;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperationID:(id)a0 roots:(id)a1 rootFilenames:(id)a2 targetFolder:(id)a3 lastUsedDatePolicy:(unsigned long long)a4 bounce:(char)a5 byCopy:(char)a6;

@end

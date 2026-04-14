@class _NSAuxiliaryUndoManagerReference, NSArray, NSData, LNActionOutput, LNActionAppContext, LNAction;

@interface LNSuccessResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *actionData;
@property (readonly, copy, nonatomic) NSData *outputData;
@property (readonly, copy, nonatomic) NSData *appContextData;
@property (readonly, copy, nonatomic) NSData *predictionsData;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNActionOutput *output;
@property (readonly, copy, nonatomic) LNActionAppContext *actionAppContext;
@property (readonly, copy, nonatomic) NSArray *predictions;
@property (readonly, retain, nonatomic) _NSAuxiliaryUndoManagerReference *undoReference;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)verboseDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAction:(id)a0 output:(id)a1 actionAppContext:(id)a2 predictions:(id)a3;
- (id)initWithAction:(id)a0 output:(id)a1 actionAppContext:(id)a2 predictions:(id)a3 undoReference:(id)a4;
- (id)initWithActionData:(id)a0 outputData:(id)a1 appContextData:(id)a2 predictionsData:(id)a3 undoReference:(id)a4;

@end

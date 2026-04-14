@class _NSAuxiliaryUndoManagerReference, NSArray, NSData, LNActionOutput, LNActionAppContext, LNAction;

@interface LNSuccessResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *segmentData;
@property (copy, nonatomic) NSData *metricsData;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNActionOutput *output;
@property (readonly, copy, nonatomic) LNActionAppContext *actionAppContext;
@property (readonly, copy, nonatomic) NSArray *predictions;
@property (readonly, retain, nonatomic) _NSAuxiliaryUndoManagerReference *undoReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)verboseDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 output:(id)a1 actionAppContext:(id)a2 predictions:(id)a3;
- (id)initWithAction:(id)a0 output:(id)a1 actionAppContext:(id)a2 predictions:(id)a3 undoReference:(id)a4;
- (void)combineMetrics:(id)a0;

@end

@class NSString, NSSet, NSMutableDictionary, NSNumber;

@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_problems;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *effectiveProblemMessage;
@property (readonly, nonatomic) NSSet *effectedRecordNames;
@property (retain, nonatomic) NSNumber *pendingRequestID;
@property (nonatomic) char needsSyncUp;
@property (readonly, nonatomic) char shouldResetAfterFixingState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addProblem:(id)a0;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)a0;
- (int)_zoneStateForProblemType:(int)a0;
- (void)addProblemWithType:(int)a0 recordName:(id)a1;
- (id)initWithProblemReport:(id)a0;

@end

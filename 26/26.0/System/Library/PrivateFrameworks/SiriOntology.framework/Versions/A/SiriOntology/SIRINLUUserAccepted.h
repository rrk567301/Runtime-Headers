@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAccepted : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *offerId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOfferId:(id)a0 reference:(id)a1;

@end

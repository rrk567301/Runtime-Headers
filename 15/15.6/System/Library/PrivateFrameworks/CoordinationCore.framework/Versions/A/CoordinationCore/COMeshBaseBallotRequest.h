@class COBallot, NSString;

@interface COMeshBaseBallotRequest : COMeshRequest <COMeshBaseBallotCommandProtocol>

@property (copy, nonatomic) COBallot *ballot;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1 variant:(long long)a2;

@end

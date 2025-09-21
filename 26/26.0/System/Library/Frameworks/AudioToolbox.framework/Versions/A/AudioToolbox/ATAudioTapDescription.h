@class NSArray, NSString, NSUUID, AVAudioFormat;

@interface ATAudioTapDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tapType;
@property (nonatomic) int processIdentifier;
@property (copy, nonatomic) NSArray *processIdentifiers;
@property (copy, nonatomic) NSArray *excludedPIDs;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (nonatomic) long long muteBehavior;

- (id)initProcessTapWithFormat:(id)a0 PID:(int)a1 deviceUID:(id)a2;
- (id)initProcessTapWithFormat:(id)a0 PIDs:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)setProcessIdentifiersChecked:(id)a0;
- (id)description;
- (id)initTapInternalWithFormat:(id)a0 PIDs:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initBaseTapInternalWithFormat:(id)a0;
- (id)initSystemTapWithFormat:(id)a0 excludePIDs:(id)a1;
- (id)initProcessTapWithFormat:(id)a0 PID:(int)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initSystemTapWithFormat:(id)a0;

@end

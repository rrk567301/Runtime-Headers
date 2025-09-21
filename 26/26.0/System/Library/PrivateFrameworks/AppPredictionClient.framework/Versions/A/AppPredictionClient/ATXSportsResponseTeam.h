@class NSString;

@interface ATXSportsResponseTeam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *umcid;
@property (readonly, nonatomic) NSString *qid;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 umcid:(id)a1;
- (id)initWithName:(id)a0 umcid:(id)a1 qid:(id)a2;

@end

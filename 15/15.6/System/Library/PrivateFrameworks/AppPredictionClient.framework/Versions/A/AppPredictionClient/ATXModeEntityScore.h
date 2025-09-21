@class NSUUID, NSDictionary;

@interface ATXModeEntityScore : NSObject <NSSecureCoding, ATXModeEntityJsonProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) double score;
@property (retain, nonatomic) NSDictionary *featureVector;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (char)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithScore:(double)a0 featureVector:(id)a1 uuid:(id)a2;

@end

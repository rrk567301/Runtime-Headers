@class NSString, WFLSMResult;

@interface WFVerdict : NSObject {
    char restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(char)a0 URL:(id)a1 evidence:(int)a2 LSMEvaluationResult:(id)a3 message:(id)a4;

- (void)dealloc;
- (id)description;
- (id)URL;
- (id)message;
- (void)setURL:(id)a0;
- (void)setMessage:(id)a0;
- (char)restricted;
- (void)setRestricted:(char)a0;
- (int)evidence;
- (void)setEvidence:(int)a0;
- (id)LSMEvaluationResult;
- (void)setLSMEvaluationResult:(id)a0;

@end

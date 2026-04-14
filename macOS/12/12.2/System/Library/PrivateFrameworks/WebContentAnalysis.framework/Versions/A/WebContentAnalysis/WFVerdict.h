@class NSString, WFLSMResult;

@interface WFVerdict : NSObject {
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(BOOL)a0 URL:(id)a1 evidence:(int)a2 LSMEvaluationResult:(id)a3 message:(id)a4;

- (void)dealloc;
- (id)description;
- (id)URL;
- (BOOL)restricted;
- (void)setURL:(id)a0;
- (void)setMessage:(id)a0;
- (id)message;
- (void)setRestricted:(BOOL)a0;
- (void)setEvidence:(int)a0;
- (void)setLSMEvaluationResult:(id)a0;
- (int)evidence;
- (id)LSMEvaluationResult;

@end

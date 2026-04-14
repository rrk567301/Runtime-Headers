@class NSString, WFLSMResult;

@interface WFVerdict : NSObject {
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(BOOL)a0 URL:(id)a1 evidence:(int)a2 LSMEvaluationResult:(id)a3 message:(id)a4;

- (void)setMessage:(id)a0;
- (void)setURL:(id)a0;
- (id)URL;
- (void)setRestricted:(BOOL)a0;
- (id)description;
- (id)message;
- (void)dealloc;
- (BOOL)restricted;
- (int)evidence;
- (void)setEvidence:(int)a0;
- (id)LSMEvaluationResult;
- (void)setLSMEvaluationResult:(id)a0;

@end

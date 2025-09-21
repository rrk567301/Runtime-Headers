@class AFUserUtterance, AceObject;

@interface SRUIFSpeechRecognitionHypothesis : NSObject <NSCopying>

@property (readonly, nonatomic) AFUserUtterance *userUtterance;
@property (readonly, nonatomic, getter=isFinal) char final;
@property (readonly, nonatomic) AceObject *backingAceObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUserUtterance:(id)a0 backingAceObject:(id)a1 isFinal:(char)a2;

@end
